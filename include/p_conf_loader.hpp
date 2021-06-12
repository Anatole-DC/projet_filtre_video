#if !defined(P_CONF_LOADER_HPP_INCLUDED)
#define P_CONF_LOADER_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<string> load_conf_file(string path);

vector<string> split(string line, string delimiter);

string ltrim(const string &word);

string rtrim(const string &word);

string strip(const string &word);

#endif // P_CONF_LOADER_HPP_INCLUDED
