
void FUN_0046bec0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_24 [6];
  
  *param_3 = *param_1;
  puVar2 = (undefined4 *)&stack0x00000014;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0041d3f0(&stack0x00000010);
  FUN_0046cfd0(param_1,0,param_2 - (int)param_1 >> 2,iVar1);
  return;
}

