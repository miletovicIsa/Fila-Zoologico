# 🐾 Fila de Atendimento de Animais

> Um sistema em **C** que simula uma **fila de atendimento veterinário**, permitindo registrar, visualizar e atender animais de forma sequencial ou com prioridade.  
> 💡 Ideal para estudos sobre **estruturas de dados dinâmicas (listas encadeadas)**.

---

## 📖 Sumário
- [📘 Sobre o Projeto](#-sobre-o-projeto)
- [⚙️ Funcionalidades](#️-funcionalidades)
- [📁 Estrutura do Projeto](#-estrutura-do-projeto)
- [🧩 Como Compilar e Executar](#-como-compilar-e-executar)
- [🧠 Explicação Técnica](#-explicação-técnica)
- [👩‍💻 Autor](#-autor)

---

## 📘 Sobre o Projeto
O programa implementa uma **fila dinâmica** para gerenciar o atendimento de animais em uma clínica veterinária.  
Ele permite cadastrar novos pacientes, visualizar a fila atual, atender o próximo da fila e inserir animais com prioridade.

> 🧩 O projeto foi feito em **linguagem C**, utilizando **ponteiros e alocação dinâmica de memória** para manipular a fila.

---

## ⚙️ Funcionalidades

<details>
<summary>✨ Clique para expandir a tabela</summary>

| 🧾 Opção | 🐶 Descrição |
|:--:|:--|
| `1️⃣ Visualizar Fila` | Exibe todos os animais aguardando atendimento. |
| `2️⃣ Adicionar Paciente` | Cadastra um novo animal no final da fila. |
| `3️⃣ Atender` | Remove e mostra o primeiro animal da fila. |
| `4️⃣ Adicionar com Prioridade` | Insere o animal no início da fila (casos urgentes). |
| `5️⃣ Sair` | Encerra o programa. |

</details>

---

## 📁 Estrutura do Projeto

```bash
📦 projeto_fila_animais
├── main.c          # Função principal (menu e controle de fluxo)
├── fila.c          # Implementação das funções da fila
├── fila.h          # Definições das structs e protótipos das funções
└── README.md       # Documentação do projeto
```
## 🧩 Como Compilar e Executar
- Compilação (via terminal com GCC)

```bash
gcc main.c fila.c -o fila
```
- Execução

```bash
./fila
```
**⚠️ Certifique-se de que main.c, fila.c e fila.h estejam na mesma pasta.**

## 🧠 Explicação Técnica
<details> <summary>🔍 Ver detalhes técnicos</summary>

O sistema utiliza listas encadeadas para representar a fila.
Cada nó da fila contém as informações de um animal e o ponteiro para o próximo.

## ⚙️ Principais Funções

| Função                | Descrição                                   |
| --------------------- | ------------------------------------------- |
| `iniciaFila()`        | Inicializa a fila (ponteiro nulo).          |
| `filaVazia()`         | Verifica se a fila está vazia.              |
| `inserir()`           | Insere um novo animal no fim da fila.       |
| `inserirPrioridade()` | Insere um novo animal no início da fila.    |
| `atender()`           | Remove e retorna o primeiro animal da fila. |
| `exibirFila()`        | Exibe todos os animais cadastrados.         |
</details>

## 🧑‍💻 Autor

**Isabela Marques Miletovic**

Projeto acadêmico desenvolvido em linguagem C, com foco no estudo e aplicação de estruturas de dados dinâmicas.



