
void FUN_00469a80(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_2c [6];
  undefined4 uStack_14;
  
  uVar1 = param_2 - param_1;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    uStack_14 = 0;
    param_2 = param_2 + -4;
    puVar3 = (undefined4 *)&stack0x0000000c;
    puVar4 = auStack_2c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_0041d3f0(param_2);
    FUN_00469ae0(param_1,param_2,param_2,iVar2);
    uVar1 = param_2 - param_1;
  }
  return;
}

