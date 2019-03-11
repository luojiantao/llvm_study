/**/
#include <ctype.h>
#include <stdlib.h>
enum Token_Type {
	EOF_TOKEN = 0,          //规定文件的结束
	NUMERIC_TOKEN,			//当前token是数值类型的
	IDENTIFIER_TOKEN,		//当前token是标识符
	PARAN_TOKEN,			//当前token是括号
	DEF_TOKEN				//当前token是def声明,之后是函数定义
};

static int Numeric_Val;
static std::string Identifier_string;
/*
isspace: 是否为空格字符
isalpha: 是否为英文字符
isalnum: 判断字符变量c是否为字母或数字
isdigit: 用于检查其参数是否为十进制数字字符
strtod:  将字符串转换成浮点数
*/
static int get_token(){
	static int LastChar = ' ';

	while(isspace(LastChar)){
		LastChar = fgetc(file);
	}

	if(isalpha(LastChar)) {
		Identifier_string = LastChar;
		while(isalnum((LastChar = fgetc(file)))){
			Identifier_string += LastChar;
		}

		if(Identifier_string == "def"){
			return DEF_TOKEN;
		}

		return IDENTIFIER_TOKEN;
	}

	if(isdigit(LastChar)){
		std::string NumStr;
		do {
			NumStr += LastChar;
			LastChar = fgetc(file);
		}while(isdigit(LastChar));

		Nu meric_Val = strtod(NumStr.c_str(), 0);
		return NUMERIC_TOKEN;
	}

	if(LastChar == '#'){
		do {
			LastChar = fgetc(file);
		}while(LastChar != EOF && LastChar != '\n' && LastChar != '\r');

		if(LastChar != EOF){
			return get_token();
		}
	}

	if(LastChar == EOF){
		return EOF_TOKEN;
	}

	int ThisChar = LastChar;
	LastChar = fgetc(file);
	return ThisChar;
}
