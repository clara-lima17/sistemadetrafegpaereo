# 📁 src/ — Código-Fonte

Esta pasta contém **todo o código-fonte do projeto**, ou seja, os arquivos que você escreve e que serão compilados para gerar o programa final.

---

## O que é essa pasta?

`src` vem da palavra inglesa **source**, que significa **fonte** ou **origem**.  
É aqui que fica a lógica do seu programa — tudo que você codifica vai dentro desta pasta.

---

## Tipos de arquivo que pertencem aqui

| Extensão | O que é |
|---|---|
| `.c` | Arquivo de código em linguagem C |
| `.cpp` | Arquivo de código em C++ |

> ⚠️ **Não coloque** arquivos `.h` aqui. Eles têm uma pasta própria: `include/`

---

## Exemplos de arquivos que ficam aqui

```
src/
├── main.c          ← ponto de entrada do programa
├── calculadora.c   ← funções da calculadora
├── utils.c         ← funções auxiliares/utilitárias
└── jogador.c       ← lógica relacionada ao jogador (em jogos, por exemplo)
```

---

## Por que usar essa pasta?

Organizar o código em `src/` separa claramente **o que você escreve** do que é gerado automaticamente (como os arquivos em `build/`).  
Isso torna o projeto mais fácil de navegar, especialmente quando ele cresce e passa a ter muitos arquivos.

Além disso, é uma convenção amplamente usada no mercado — qualquer desenvolvedor que abrir seu projeto vai entender a estrutura imediatamente.

---

## 📚 Quer entender mais sobre essa arquitetura?

- [Organização de projetos em C — Embarcados](https://embarcados.com.br/organizacao-de-projetos-em-c/)
- [Project Structure for C — Stack Overflow (inglês)](https://stackoverflow.com/questions/2360734/whats-a-good-directory-structure-for-larger-c-projects)
- [The Art of Unix Programming — Estrutura de projetos (inglês)](http://www.catb.org/~esr/writings/taoup/html/)
