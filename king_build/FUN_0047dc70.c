
void FUN_0047dc70(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 3;
  if (0 < iVar3) {
    puVar1 = param_3;
    do {
      puVar2 = puVar1 + -2;
      iVar3 = iVar3 + -1;
      *puVar2 = *(undefined4 *)((param_2 - (int)param_3) + -8 + (int)puVar1);
      puVar1[-1] = *(undefined4 *)((param_2 - (int)param_3) + 4 + (int)puVar2);
      puVar1 = puVar2;
    } while (iVar3 != 0);
  }
  return;
}

