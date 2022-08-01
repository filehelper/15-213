## phase_1

`Border relations with Canada have never been better.`
```shell
(gdb) disassemble phase_1
Dump of assembler code for function phase_1:
   0x0000000000400ee0 <+0>:     sub    $0x8,%rsp
   0x0000000000400ee4 <+4>:     mov    $0x402400,%esi
   0x0000000000400ee9 <+9>:     call   0x401338 <strings_not_equal>
   0x0000000000400eee <+14>:    test   %eax,%eax
   0x0000000000400ef0 <+16>:    je     0x400ef7 <phase_1+23>
   0x0000000000400ef2 <+18>:    call   0x40143a <explode_bomb>
   0x0000000000400ef7 <+23>:    add    $0x8,%rsp
   0x0000000000400efb <+27>:    ret    
End of assembler dump.
(gdb) print *(char*)0x402400@128
$1 = "Border relations with Canada have never been better.\000\000\000\000Wow! You've defused the secret stage!\000flyers", '\000' <repeats 12 times>, "|\017@\000\000\000\000\000\271\017@\000\000\000\000"
```
只是比较字符串是否相等，直接查看内存中字符串即可。