
int __thiscall FUN_00514a30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_64 [100];
  
  iVar1 = -2;
  if (((-1 < *(int *)(param_1 + 0x204)) && (*(int *)(&DAT_006743e8 + param_2 * 4) != 0)) &&
     ((DAT_006d0fcc != 1 ||
      (((((param_2 < 0x123 || (0x126 < param_2)) && (param_2 != 0x103)) &&
        ((param_2 != 0x104 && (param_2 != 0x108)))) && (param_2 != 0x109)))))) {
    iVar2 = FUN_005bd200(*(int *)(param_1 + 0x204) + 1000);
    if (iVar2 == 0) {
      FUN_0061c369(local_64,&DAT_0066b8cc,*(undefined4 *)(param_1 + 0x204));
      FUN_005d2520(s_Incorrect_code_for_redefinition_00675c0c,local_64);
    }
    iVar5 = 0;
    piVar4 = (int *)(param_1 + 0x2cc);
    iVar1 = *(int *)(param_1 + 0x2cc + *(int *)(param_1 + 0x204) * 4);
    do {
      if ((((piVar4[-0x2f] == param_2) || ((-1 < iVar1 && (*piVar4 == iVar1)))) ||
          (*piVar4 == param_2)) &&
         ((iVar5 != *(int *)(param_1 + 0x204) && (iVar3 = FUN_005bd200(iVar5 + 1000), iVar3 == 0))))
      {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < 0x2f);
    iVar1 = -1;
    if (param_2 < 0x103) {
      *(int *)(param_1 + 0x210 + *(int *)(param_1 + 0x204) * 4) = param_2;
    }
    else {
      *(int *)(param_1 + 0x2cc + *(int *)(param_1 + 0x204) * 4) = param_2;
    }
    *(uint *)(iVar2 + 0x11c) = *(uint *)(iVar2 + 0x11c) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
  }
  return iVar1;
}

