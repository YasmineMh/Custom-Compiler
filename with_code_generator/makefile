
all:
	@flex -o lexique_projet.c lexique_projet.l
	@bison -d syntaxe_projet.y
	@gcc lexique_projet.c syntaxe_projet.tab.c generation_code.c `pkg-config --cflags --libs glib-2.0` -o projet
clean:
	@rm -rf lexique_projet.c syntaxe_projet.tab.c  syntaxe_projet.tab.h
