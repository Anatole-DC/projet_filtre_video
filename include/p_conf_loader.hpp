#if !defined(P_CONF_LOADER_HPP_INCLUDED)
#define P_CONF_LOADER_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

/**
 * Fonction qui charge un fichier .conf et qui retourne les paramètres de ce fichier
 * \param string Le chemin vers le fichier
 * \return Un tableau avec le chemin de la video et le filtre à appliquer
 * \author Anatole de Chauveron
*/
vector<string> load_conf_file(string path);

/**
 * Fonction qui découpe une chaine selon un délimiteur.
 * \param string la chaine à découper
 * \return un tableau avec la dernière valeur (à fixer)
 * \author Anatole de Chauveron
*/
vector<string> split(string line, string delimiter);

/**
 * Fonction qui retire les characters qui ne sont pas des lettres ou des symboles (retour à la ligne, espaces...) au début d'un mot
 * \param string le mot à nettoyer
 * \return le mot nettoyé
 * \author Anatole de Chauveron
*/
string lstrip(const string &word);

/**
 * Fonction qui retire les characters qui ne sont pas des lettres ou des symboles (retour à la ligne, espaces...) à la fin d'un mot
 * \param string le mot à nettoyer
 * \return le mot nettoyé
 * \author Anatole de Chauveron
*/
string rstrip(const string &word);

/**
 * Fonction qui retire les characters qui ne sont pas des lettres ou des symboles (retour à la ligne, espaces...) autour d'un mot
 * \param string le mot à nettoyer
 * \return le mot nettoyé
 * \author Anatole de Chauveron
*/
string strip(const string &word);

#endif // P_CONF_LOADER_HPP_INCLUDED
