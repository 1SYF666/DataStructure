#include <iostream>      //它把 iostream 的内容读入我们的文本文件中
#include <cassert>
#include <fstream>
#include <string>
#include <utility> 
#include <complex>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
//C++标准库中的名字都是在一个称作 std 的名字空间中声明的
//using 指示符告诉编译器要使用在名字空间 std 中声明的名字
// iostream是输入输出流库标准文件注意它没有后缀，它包含cout的信息 
// 这对我们的程序是必需的

// __FILE__ 用以指示本行语句所在源文件的文件名
// __LINE__ 用以指示本行语句所在源文件中的位置信息

typedef pair<short, short> location;
typedef vector<location, allocator> loc;
typedef vector<string, allocator> text;
typedef pair<text*, loc*> text_loc;


class TextQuery
{
public:
	TextQuery()
	{
		memset(this, 0, sizeof(TextQuery));
	}
	static void filter_elements(string felems)
	{
		filt_elems = felems;
	}
	void query_text();
	void display_map_text();
	void display_text_locations();
	void doit() 
	{
		retrieve_text();
		separate_words();
		filter_text();
		suffix_text();
		strip_caps();
		build_word_map();
	}

private:
	void retrieve_text();
	void separate_words();
	void filter_text();

	void strip_caps();
	void suffix_text();
	void suffix_s(string&);
	void build_word_map();

private:
	vector<string, allocator>* lines_of_text;
	text_loc* text_locations;
	map<string, loc*, less<string>, allocator>* word_map;
	static string filt_elems;
};


string TextQuery::filt_elems("\",.;:!<<)(\\/");

int main()
{

	TextQuery tq;
	tq.doit();
	tq.query_text();
	tq.display_map_text();

	return 0;
}


void TextQuery::retrieve_text()
{
	string file_name;
	cout << "Please enter file name: ";
	cin >> file_name;
	ifstream infile(file_name.c_str(), ios::in);

	if (!infile)
	{
		cerr << "oops! unable to open file "
			<< file_name << " -- bailing out!\n";
		exit(-1);
	}

	else cout << "\n";

	lines_of_text = new vector<string, allocator>;

	string textline;

	while (getline(infile,textline,'\n'))
	{
		lines_of_text->push_back(textline);
	}
}

void TextQuery::separate_words()
{
	vector<string, allocator>* word = new vector<string, allocator>;
	vector<location, allocator>* location = new vector<location, allocator>;

	for (short line_pos = 0; line_pos < lines_of_text->size(); line_pos++)
	{
		short word_pos = 0;
		string textline = (*lines_of_text)[line_pos];
		string::size_type eol = textline.length();
		string::size_type pos = 0, prev_pos = 0;
		while ((pos=textline.find_first_of(' ',pos))!=string::npos)
		{
			words->push_back(
				textline.substr(prev_pos, pos - prev_pos));
			locations->push_back(
				make_pair(line_pos, word_pos));
			word_pos++; pos++; prev_pos = pos;
		}
		words->push_back(
			textline.substr(prev_pos, pos - prev_pos));
		locations->push_back(make_pair(line_pos, word_pos));

	}

	text_locations = new text_loc(words, locations);
}






