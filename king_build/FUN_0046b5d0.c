
void FUN_0046b5d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_28 [6];
  
  if (7 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    iVar1 = param_2 - param_1 >> 2;
    iVar3 = (iVar1 + -2) / 2;
    iVar4 = param_1 + iVar3 * 4;
    while( true ) {
      puVar5 = (undefined4 *)&stack0x0000000c;
      puVar6 = auStack_28;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_0041d3f0(iVar4);
      FUN_0046b640(param_1,iVar3,iVar1,iVar2);
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + -4;
    }
  }
  return;
}

