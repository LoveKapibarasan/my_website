# Machine Language
* 0 or 1

**Instruction Set Architecture**
1. x86-64(Intel, AMD)
1. ARM
1. RISC -V(SiFive,)
(Home_Page)[https://riscv.org/]
(Github)[https://github.com/riscv/riscv-isa-manual]

```
[Opcode] [Operand1] [Operand2] [Operand3]
```
* OPCODE: verb
* OPERAND: object 
*  Addressing Mode: 
    * Direct Indirect(Relative) referecing
* FLAG


# Assembly Language

**Commands**
* `mov`
* 
**section**
* `.section`, `.data`, `.globl`

### Assembler 
* GAS（GNU Assembler）
    * Linux/Unix
* NASM
    * Intel Syntax
* MASM(Microsoft)

### Linker

### Debugger
* GNU debugger`gdb`
```
(gdb) run
(gdb) disassemble _start
(gdb) step
(gdb) info registers
(gdb) print $rax
```
### Syntax
**AT & T Syntax**(Unix, Linux)
* %eax
* $literal(immediate)
* source, destnation
**Intel Syntax**(Windows（MASM/NASM）)
* eax
* literal
* destnation, source
