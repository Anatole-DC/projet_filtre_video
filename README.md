# FILTRE VIDEO - OPENCV

**Auteur :** Anatole de Chauveron

**Technologies :** C++ OpenCV

**Date :** 12 juin 2021

**Version :** 1.5.0

**Licence :** Tous droits réservés

___

## A propos

Cette application permet d'appliquer un filtre sur une vidéo, en passant en paramètre de l'exécutable un fichier de configuration, comportant le lien vers la vidéo, et le filtre à appliquer.

```bash
./filtre_video.exe fichier.conf
```

## Utilisation du projet

### Prérequis

Pour pouvoir utiliser ce projet, vous aurez besoin d'avoir les outils indiqués ci-dessous, installés sur votre machine.

**OpenCV :** v.4.5.2

**gcc :** v.9.3.0

**g++ :** v.9.3.0

**gdb :** v.9.2

**cmake :** v.3.16.3

**make :** v.4.2.1

### Installation

Pour récupérer le projet, exécuter la commande suivante.

```bash
git clone https://github.com/Anatole-DC/projet_filtre_video.git
```

### Compilation

Une fois le projet installer sur votre ordinateur, placez-vous dans le repertoire du projet.

```bash
cd <nom_du_repertoire>          # Le projet est cloné par défaut dans un fichier nommé "projet_filtre_video"
```

Exécutez le commande suivante.

```bash
cmake .
```

Une fois l'opération terminée, vous pouvez lancer la commande suivante.

```bash
make
```

### Lancer le projet

La compilation a généré un fichier `filtre_video.exe`. Pour pouvoir l'executer, dans votre invite de commande, entrez la commande suivante.

```bash
./filtre_video.exe fichier.conf
```

## Liste des filtres disponibles

### Filtres de coloration

GRAYSCALE_FILTER    :   La vidéo est lancée en gris
BLUR_FILTER         :   La vidéo est floutée
EDGE_FILTER         :   Affiche le contour des formes sur la vidéo 
HSV_FILTER          :   Affiche la luminosité sur l'image

### Filters de détection

FACE_FILTER         :   Détecteur de visage
BLUR_FACE_FILTER    :   Floute les visages détectés

### Filtres peu performants

CAR_FILTER          :   Détection de voiture

