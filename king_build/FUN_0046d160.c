
void FUN_0046d160(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_28 [6];
  undefined4 uStack_10;
  
  uStack_10 = 0;
  puVar2 = (undefined4 *)&stack0x0000000c;
  puVar3 = auStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2 = param_2 + -4;
  FUN_0041d3f0(param_2);
  FUN_0046bec0(param_1,param_2,param_2,iVar1);
  return;
}

