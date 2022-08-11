# Custom-Compiler

Create a custom compiler using C, Flex and Bison.

## Install

```bash
sudo apt install flex
sudo apt install bison
sudo apt-get install libglib2.0-dev
```

## Run

```bash
flex -o lexique_projet.c lexique_projet.l
bison -d syntaxe_projet.y
gcc lexique_projet.c syntaxe_projet.tab.c `pkg-config --cflags --libs glib-2.0` -o projet
```

## Clean

```bash
rm -rf lexique_projet.c syntaxe_projet.tab.c  syntaxe_projet.tab.h
```
