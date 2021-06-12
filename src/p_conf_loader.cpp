#include "../include/p_conf_loader.hpp"

vector<string> load_conf_file(string path) {
    vector<string> configuration;

    // Open file
    ifstream conf_file(path);

    if (!conf_file) {
        cerr << "Une erreur est survenue lors de l'ouverture du fichier : " << path << endl;
        return configuration;
    }

    // Read file content
    string line;

    // Pour chaque ligne on ajoute les arguments
    while(getline(conf_file, line)) {
        vector<string> arg = split(line, "=");

        for (size_t i = 0; i < arg.size(); i++)
        {
            configuration.push_back(arg[0]);
        }

    }

    // Close file
    conf_file.close();

    cout << "Video : " << configuration[0] << " | Filter : " << configuration[1] << endl;

    return configuration;
}


vector<string> split(string line, string delimiter) {
    vector<string> splited_line;

    int start = 0;                      // Le token pour decouper la chaine
    int end = line.find(delimiter);     // La condition d'arrêt
    while (end != -1) {
        // cout << line.substr(start, end - start) << endl;
        start = end + delimiter.size();     // Decalage du token
        end = line.find(delimiter, start);  // Decoupage de la chaine
    }

    string part = line.substr(start, end - start);
    splited_line.push_back(strip(part));    // on ajoute l'argument

    return splited_line;
}

const string WHITESPACE = " \n\r\t\f\v";
 
string lstrip(const string &word)
{
    size_t start = word.find_first_not_of(WHITESPACE);

    if (start == string::npos) {
        return "";
    }

    return word.substr(start);
}
 
string rstrip(const string &word)
{
    size_t end = word.find_last_not_of(WHITESPACE);

    if (end == string::npos) {
        return "";
    }

    return word.substr(0, end + 1);
}
 
string strip(const string &word) {
    return rstrip(lstrip(word));
}