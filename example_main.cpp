#include "interpreter.h"

int main()
{

    rigelInterpreter rigelInterpreter1(0);
    rigelInterpreter1.Setregister64("rax", 0xeeeefffffffffff);
    rigelInterpreter1.Analyse_command("007FFFFFFF400000  mov rax 0xEEEEFFFFFFFFFFFF");
    rigelInterpreter1.Analyse_command("007FFFFFFF40000C  mov rdx 0xEA1E");
    rigelInterpreter1.Analyse_command("007FFFFFFF4000A1  mov rcx rdx");
    rigelInterpreter1.Analyse_command("007FFFFFFF4000AB  xor rax rdx");
    rigelInterpreter1.Analyse_command("007FFFFFFF4000B1  xor rcx 0x1000");

    rigelInterpreter1.show_all_registers();
}
