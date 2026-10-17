
int __fastcall FUN_005d2120(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[4];
  iVar2 = param_1[3];
  cVar1 = *(char *)(iVar2 + uVar3);
  uVar4 = param_1[1];
  while( true ) {
    if (cVar1 == '\0') {
      *(undefined1 *)(iVar2 + uVar3) = 1;
      param_1[4] = uVar3;
      return *param_1 * uVar3 + param_1[2];
    }
    if ((int)uVar4 < 1) break;
    uVar3 = (uVar3 + 1) % (uint)param_1[1];
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)(iVar2 + uVar3);
  }
  return 0;
}

