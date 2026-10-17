
/* WARNING: Removing unreachable block (ram,0x004709c4) */
/* WARNING: Removing unreachable block (ram,0x004709c9) */
/* WARNING: Removing unreachable block (ram,0x004709d2) */

void __thiscall FUN_004709b0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = param_1[1] + (*param_1 - param_1[1]);
  param_1[1] = iVar2;
  if (param_2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0044c1c0(iVar2,param_2,param_2 + ~uVar3);
  }
  return;
}

