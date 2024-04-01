#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
class rigelInterpreter {
public:
    //registers
    DWORD64 rip;
    DWORD64 rax;
    DWORD64 rcx;
    DWORD64 rdx;
    DWORD64 rbx;
    DWORD64 rsp;
    DWORD64 rbp;
    DWORD64 rsi;
    DWORD64 rdi;
    DWORD64 r8;
    DWORD64 r9;
    DWORD64 r10;
    DWORD64 r11;
    DWORD64 r12;
    DWORD64 r13;
    DWORD64 r14;
    DWORD64 r15;

    rigelInterpreter(uint64_t init_value) {
        this->rip = init_value;
        this->rax = init_value;
        this->rcx = init_value;
        this->rdx = init_value;
        this->rbx = init_value;
        this->rsp = init_value;
        this->rbp = init_value;
        this->rsi = init_value;
        this->rdi = init_value;
        this->r8 = init_value;
        this->r9 = init_value;
        this->r10 = init_value;
        this->r11 = init_value;
        this->r12 = init_value;
        this->r13 = init_value;
        this->r14 = init_value;
        this->r15 = init_value;
    }
    uint64_t get_reg_value64(string reg) {
        uint64_t value2;
        if (reg == "rax") {
            value2 = this->rax;
        }
        else if (reg == "rbx") {
            value2 = this->rbx;
        }
        else if (reg == "rcx") {
            value2 = this->rcx;
        }
        else if (reg == "rdx") {
            value2 = this->rdx;
        }
        else if (reg == "rsp") {
            value2 = this->rsp;
        }
        else if (reg == "rbp") {
            value2 = this->rbp;
        }
        else if (reg == "rsi") {
            value2 = this->rsi;
        }
        else if (reg == "rdi") {
            value2 = this->rdi;
        }
        else if (reg == "r8") {
            value2 = this->r8;
        }
        else if (reg == "r9") {
            value2 = this->r9;
        }
        else if (reg == "r10") {
            value2 = this->r10;
        }
        else if (reg == "r11") {
            value2 = this->r11;
        }
        else if (reg == "r12") {
            value2 = this->r12;
        }
        else if (reg == "r13") {
            value2 = this->r13;
        }
        else if (reg == "r14") {
            value2 = this->r14;
        }
        else if (reg == "r15") {
            value2 = this->r15;
        }
        else
            return false;
        return value2;
    }
    DWORD64* get_reg_ptr64(string reg) {
        if (reg == "rax") {
            return &this->rax;
        }
        else if (reg == "rbx") {
            return &this->rbx;
        }
        else if (reg == "rcx") {
            return &this->rcx;
        }
        else if (reg == "rdx") {
            return &this->rdx;
        }
        else if (reg == "rsp") {
            return &this->rsp;
        }
        else if (reg == "rbp") {
            return &this->rbp;
        }
        else if (reg == "rsi") {
            return &this->rsi;
        }
        else if (reg == "rdi") {
            return &this->rdi;
        }
        else if (reg == "r8") {
            return &this->r8;
        }
        else if (reg == "r9") {
            return &this->r9;
        }
        else if (reg == "r10") {
            return &this->r10;
        }
        else if (reg == "r11") {
            return &this->r11;
        }
        else if (reg == "r12") {
            return &this->r12;
        }
        else if (reg == "r13") {
            return &this->r13;
        }
        else if (reg == "r14") {
            return &this->r14;
        }
        else if (reg == "r15") {
            return &this->r15;
        }
        else
            return NULL;
    }
    bool Setregister64(string reg, uint64_t value) {
        if (reg == "rax") {
            this->rax = value;
        }
        else if (reg == "rbx") {
            this->rbx = value;
        }
        else if (reg == "rcx") {
            this->rcx = value;
        }
        else if (reg == "rdx") {
            this->rdx = value;
            printf("%llx", value);
        }
        else if (reg == "rsp") {
            this->rsp = value;
        }
        else if (reg == "rbp") {
            this->rbp = value;
        }
        else if (reg == "rsi") {
            this->rsi = value;
        }
        else if (reg == "rdi") {
            this->rdi = value;
        }
        else if (reg == "r8") {
            this->r8 = value;
        }
        else if (reg == "r9") {
            this->r9 = value;
        }
        else if (reg == "r10") {
            this->r10 = value;
        }
        else if (reg == "r11") {
            this->r11 = value;
        }
        else if (reg == "r12") {
            this->r12 = value;
        }
        else if (reg == "r13") {
            this->r13 = value;
        }
        else if (reg == "r14") {
            this->r14 = value;
        }
        else if (reg == "r15") {
            this->r15 = value;
        }
        else
            return false;
        return true;
    }

    bool show_all_registers() {
        printf("\nRIP:%016llx\n\nrax:%016llx\nrbx:%016llx\nrcx:%016llx\nrdx:%016llx\nrsp:%016llx\nrbp:%016llx\nrsi:%016llx\nrdi:%016llx\nr8 :%016llx\nr9 :%016llx\nr10:%016llx\nr11:%016llx\nr12:%016llx\nr13:%016llx\nr14:%016llx\nr15:%016llx\n", this->rip, this->rax, this->rbx, this->rcx, this->rdx, this->rsp, this->rbp, this->rsi, this->rdi, this->r8, this->r9, this->r10, this->r11, this->r12, this->r13, this->r14, this->r15);
        return true;
    }
    bool mov(string reg1, string reg2) {
        return this->Setregister64(reg1, this->get_reg_value64(reg2));
    }
    bool mov(string reg1, uint64_t value) {
        return this->Setregister64(reg1, value);
    }
    bool mov(string reg1, uint32_t value) {
        uint64_t origin_value = this->get_reg_value64(reg1);
        origin_value &= 0xffffffff00000000;
        uint64_t new_value = origin_value | value;
        return this->Setregister64(reg1, new_value);
    }
    bool mov(string reg1, uint16_t value) {
        uint64_t origin_value = this->get_reg_value64(reg1);
        origin_value &= 0xffffffffffff0000;
        uint64_t new_value = origin_value | value;
        return this->Setregister64(reg1, new_value);
    }
    bool xor_(string reg1, string reg2) {
        return this->Setregister64(reg1, this->get_reg_value64(reg1) ^ this->get_reg_value64(reg2));
    }
    //r?x
    bool xor_(string reg1, uint64_t value) {
        return this->Setregister64(reg1, this->get_reg_value64(reg1) ^ value);
    }
    //e?x
    bool xor_(string reg1, uint32_t value) {
        uint64_t origin_value = this->get_reg_value64(reg1);
        uint32_t calc_value = origin_value & 0xffffffff;
        origin_value &= 0xffffffff00000000;
        uint32_t lowresult = calc_value ^ value;
        uint64_t new_value = origin_value | lowresult;
        return this->Setregister64(reg1, new_value);
    }
    //?x
    bool xor_(string reg1, uint16_t value) {
        uint64_t origin_value = this->get_reg_value64(reg1);
        uint16_t calc_value = origin_value & 0xffff;
        origin_value &= 0xffffffffffff0000;
        uint16_t lowresult = calc_value ^ value;
        uint64_t new_value = origin_value | lowresult;
        return this->Setregister64(reg1, new_value);
    }
    bool Analyse_command(string com1) {

        const char* com = com1.c_str();
        string addr;
        string command;
        string arg1;
        string arg2;
        int index = 0;
        //Analysing
        while (com[index] != ' ') {
            addr += com[index];
            index++;
        }
        int index_addr = 0;
        uint64_t value = 0;
        while (index_addr <= addr.length() - 1) {
            value = (value << 4) + (addr[index_addr] >= 'A' ? addr[index_addr] - 'A' + 10 : addr[index_addr] - '0');
            index_addr++;
        }
        this->rip = value;
        while (com[index] == ' ') index++;
        while (com[index] != ' ') {
            if (com[index] != ',')
                command += com[index];
            index++;
        }
        while (com[index] == ' ') index++;
        while (com[index] != ' ') {
            if (com[index] != ',')
                arg1 += com[index];
            index++;
        }
        while (com[index] == ' ') {
            if (com[index] == '\0') {
                arg2 = "EMPTY";
                break;
            }
            index++;
        }
        while (com[index] != ' ' && com[index] != '\0') {
            if (com[index] != ',')
                arg2 += com[index];
            index++;
        }



        printf("addr:%s %s arg1:%s arg2:%s\n", addr.c_str(), command.c_str(), arg1.c_str(), arg2.c_str());

        //mov command
        if (command == "mov") {
            //Destination is Register 64bit
            if (arg1[0] == 'r') {
                //Source is Register
                if (arg2[0] == 'r') {
                    this->mov(arg1, arg2);
                }
                //Source is Value
                else if (arg2[0] == '0' && arg2[1] == 'x') {
                    int num_level = (arg2.length() - 2) * 4;
                    if (num_level <= 16) {
                        uint16_t value = 0;
                        int index = 2;
                        while (index <= arg2.length() - 1) {
                            value = (value << 4) + (arg2[index] >= 'A' ? arg2[index] - 'A' + 10 : arg2[index] - '0');
                            index++;
                        }
                        this->mov(arg1, value);
                    }
                    else if (num_level <= 32) {
                        uint32_t value = 0;
                        int index = 2;
                        while (index <= arg2.length() - 1) {
                            value = (value << 4) + (arg2[index] >= 'A' ? arg2[index] - 'A' + 10 : arg2[index] - '0');
                            index++;
                        }
                        this->mov(arg1, value);
                    }
                    else if (num_level <= 64) {
                        uint64_t value = 0;
                        int index = 2;
                        while (index <= arg2.length() - 1) {
                            value = (value << 4) + (arg2[index] >= 'A' ? arg2[index] - 'A' + 10 : arg2[index] - '0');
                            index++;
                        }
                        this->mov(arg1, value);
                    }
                }
            }
        }
        if (command == "xor") {
            if (arg1[0] == 'r') {
                //Source is Register
                if (arg2[0] == 'r') {
                    this->xor_(arg1, arg2);
                }
                //Source is Value
                else if (arg2[0] == '0' && arg2[1] == 'x') {
                    int num_level = (arg2.length() - 2) * 4;
                    if (num_level <= 16) {
                        uint16_t value = 0;
                        int index = 2;
                        while (index <= arg2.length() - 1) {
                            value = (value << 4) + (arg2[index] >= 'A' ? arg2[index] - 'A' + 10 : arg2[index] - '0');
                            index++;
                        }
                        this->xor_(arg1, value);
                    }
                    else if (num_level <= 32) {
                        uint32_t value = 0;
                        int index = 2;
                        while (index <= arg2.length() - 1) {
                            value = (value << 4) + (arg2[index] >= 'A' ? arg2[index] - 'A' + 10 : arg2[index] - '0');
                            index++;
                        }
                        this->xor_(arg1, value);
                    }
                    else if (num_level <= 64) {
                        uint64_t value = 0;
                        int index = 2;
                        while (index <= arg2.length() - 1) {
                            value = (value << 4) + (arg2[index] >= 'A' ? arg2[index] - 'A' + 10 : arg2[index] - '0');
                            index++;
                        }
                        this->xor_(arg1, value);
                    }
                }
            }
        }
        return true;
    }
};
