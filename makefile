# Compilateur et options
CXX = g++
CXXFLAGS = -Wall -g

# Utilisation de pkg-config pour récupérer les bibliothèques et les drapeaux
PKG_CONFIG = pkg-config
LIBS = $(shell $(PKG_CONFIG) --libs allegro-5 allegro_font-5 allegro_image-5 allegro_primitives-5 allegro_ttf-5)
CFLAGS = $(shell $(PKG_CONFIG) --cflags allegro-5 allegro_font-5 allegro_image-5 allegro_primitives-5 allegro_ttf-5)

# Cibles du projet
TARGET = test
SRCS = main.cpp ./engine/engine.cpp ./core/player_ball.cpp ./core/position2D.cpp ./core/solid_objects.cpp
OBJS = $(SRCS:.cpp=.o)  # Création d'une liste des fichiers objets

# Règles de construction
all: clean $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

# Règle pour exécuter le programme
run: $(TARGET)
	./$(TARGET)

# Règle pour nettoyer les fichiers générés
clean:
	rm -f $(TARGET) $(OBJS)

# Règle pour construire les fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@
