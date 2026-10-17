
void __thiscall FUN_0054e630(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0x5518);
  puVar2 = (undefined4 *)(param_1 + 0x5494);
  do {
    puVar1[-0x2c] = 0;
    iVar3 = iVar3 + -1;
    *puVar2 = DAT_00701580;
    puVar2[1] = DAT_00701584;
    puVar2[2] = DAT_00701588;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar3 != 0);
  fVar4 = (float10)FUN_004e1fd9();
  (**(code **)(*(int *)(param_1 + 0x10) + 0x50))((float)fVar4,param_2);
  return;
}

