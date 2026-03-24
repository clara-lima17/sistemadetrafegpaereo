# 📁 build/ — Arquivos de Compilação

Esta pasta é onde o compilador coloca os **arquivos gerados automaticamente** durante o processo de compilação do projeto.

---

## O que é essa pasta?

Quando você compila um programa em C, o compilador não gera o executável final de uma vez só.  
Ele passa por etapas e produz arquivos intermediários no caminho. Todos esses arquivos vão para `build/`.

> 🔴 **Importante:** você **nunca deve editar** os arquivos desta pasta manualmente.  
> Eles são gerados e substituídos automaticamente sempre que o projeto é compilado.

---

## Tipos de arquivo que aparecem aqui

| Extensão | O que é |
|---|---|
| `.o` | Arquivo objeto — código compilado, mas ainda não "montado" |
| `.out` | Executável gerado no Linux/Mac (ex: `a.out`) |
| `.exe` | Executável gerado no Windows |
| `Makefile` gerado | Arquivo de build gerado por ferramentas como CMake |

---

## Como a compilação funciona (simplificado)

```
Você escreve      →   Compilador processa   →   build/ recebe
  src/main.c               gcc                  build/main.o
  src/utils.c              gcc                  build/utils.o
                            ↓
                     Linker une tudo
                            ↓
                     build/meu_programa   ← executável final!
```

---

## Por que usar essa pasta?

Manter os arquivos gerados em `build/` separa claramente o que **você escreveu** do que a **máquina gerou**.  
Isso evita confusão e deixa o projeto organizado.

Além disso, é fácil "limpar" o projeto: basta apagar o conteúdo de `build/` e recompilar tudo do zero.

---

## ⚠️ Esta pasta não deve ir para o Git

Os arquivos em `build/` são gerados localmente em cada máquina.  
Por isso, ela normalmente é listada no arquivo `.gitignore`, que diz ao Git para ignorá-la.

Exemplo de `.gitignore`:
```
build/
*.o
*.out
*.exe
```

> Se a pasta `build/` está no repositório agora, é só para não ficar vazia — o GitHub não aceita pastas completamente vazias. O arquivo `README.md` (este aqui) serve como "marcador de lugar".

---

## 📚 Quer entender mais sobre compilação em C?

- [Como funciona a compilação em C — DevMedia](https://www.devmedia.com.br/processo-de-compilacao-em-c/25882)
- [Entendendo o GCC — GeeksForGeeks (inglês)](https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/)
- [O que é um Makefile? — GNU Make Docs (inglês)](https://www.gnu.org/software/make/manual/make.html)
- [Arquivo .gitignore explicado — Atlassian (inglês)](https://www.atlassian.com/git/tutorials/saving-changes/gitignore)
