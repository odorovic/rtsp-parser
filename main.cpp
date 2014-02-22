
#include "http11_parser.h"

static const char* http =
"GET /index.html HTTP/1.1\r\n"
"Host: www.example.com\r\n"
"\r\n";

int main()
{
	http_parser parser;
	http_parser_init(&parser);
	http_parser_execute(&parser, http, sizeof(http), 0);
}