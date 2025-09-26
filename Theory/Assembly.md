# 🔧 Minimal primitive unit (command) of machine language

* In the world of machine language, the smallest unit of instruction that a CPU can directly understand and execute is called an instruction word.

* This instruction word is composed of a series of bits (0 and 1), and its structure depends on the CPU architecture (e.g., x86, ARM, RISC-V).

## 🔧 Minimal structure of a machine-language instruction

A typical instruction consists of the following elements:

| Component      | Role                                                                     |
| -------------- | ------------------------------------------------------------------------ |
| **Opcode**     | The part that specifies *what operation* should be performed             |
| **Operand(s)** | The part that specifies *what data* or *which location(s)* to operate on |


## 🧪 Primitive types of operations

The CPU can only perform very low-level elementary operations. Some representative categories are:

| Category             | Examples                          | What they do                                                 |
| -------------------- | --------------------------------- | ------------------------------------------------------------ |
| **Data transfer**    | `MOV`, `LOAD`, `STORE`            | Copies data between registers and memory                     |
| **Arithmetic**       | `ADD`, `SUB`, `MUL`, `DIV`        | Integer math operations                                      |
| **Logic operations** | `AND`, `OR`, `XOR`, `NOT`         | Bit-level operations                                         |
| **Comparison**       | `CMP`, `TEST`                     | Compares values and sets flags                               |
| **Branching**        | `JMP`, `JE`, `JNE`, `CALL`, `RET` | Changes the execution flow based on conditions               |
| **Shift/rotate**     | `SHL`, `SHR`, `ROL`, `ROR`        | Shifts/rotates bits left or right                            |
| **Special control**  | `NOP`, `HLT`, `INT`, `CLI`, `STI` | Interrupts, halting, “do nothing,” enable/disable interrupts |

