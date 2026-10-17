
void FUN_004b84b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_00695154 != 0) {
    puVar3 = (undefined4 *)FUN_00631d33(0x30);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *puVar3 = &PTR_LAB_0064b23c;
      puVar3[2] = *param_1;
      puVar3[3] = param_1[1];
      puVar3[4] = param_1[2];
      puVar3[5] = *param_2;
      puVar3[6] = param_2[1];
      uVar1 = param_2[2];
      puVar3[8] = param_3;
      puVar3[7] = uVar1;
      if (param_4 == 0) {
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = param_5;
        puVar3[1] = 3;
      }
      else {
        puVar3[9] = param_4;
        puVar3[10] = 1;
        puVar3[0xb] = param_5;
        puVar3[1] = 3;
      }
    }
    iVar2 = DAT_00695154;
    if (*(uint *)(DAT_00695154 + 0x24) < 0xff) {
      *(undefined4 **)(*(int *)(DAT_00695154 + 0x20) + *(uint *)(DAT_00695154 + 0x24) * 4) = puVar3;
      *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
    }
  }
  return;
}

