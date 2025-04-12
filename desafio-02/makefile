# Nome do executável
TARGET = conta_digitos_ordenado

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Diretórios
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Fontes e objetos
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Regra padrão
all: $(BIN_DIR)/$(TARGET)

# Linkagem final
$(BIN_DIR)/$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $@

# Compilação dos objetos
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Criação de diretórios se necessário
$(OBJ_DIR) $(BIN_DIR):
	mkdir -p $@

# Limpeza
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean
