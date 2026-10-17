
void FUN_0062d530(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  short asStack_20 [16];
  
  sVar4 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 2;
    sVar4 = (*(short *)((int)&DAT_0077a464 + iVar2) + sVar4) * 2;
    *(short *)((int)asStack_20 + iVar2 + 2) = sVar4;
    iVar2 = iVar3;
  } while (iVar3 < 0x1d);
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      uVar5 = (uint)(ushort)param_1[1];
      if (uVar5 != 0) {
        sVar4 = asStack_20[uVar5];
        asStack_20[uVar5] = sVar4 + 1;
        uVar1 = FUN_0062e2e0(sVar4,uVar5);
        *param_1 = uVar1;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

