
void FUN_004b8280(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006443ab;
  local_c = ExceptionList;
  if (DAT_00695154 != 0) {
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)FUN_00631d33(0x108);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_0064b234;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      FUN_005eebf0();
      *puVar2 = &PTR_LAB_0064b230;
      puVar2[2] = *param_1;
      puVar2[3] = param_1[1];
      uVar1 = param_1[2];
      puVar2[5] = param_2;
      puVar2[4] = uVar1;
      puVar2[6] = param_3;
      puVar2[7] = *param_4;
      puVar2[8] = param_4[1];
      uVar1 = param_4[2];
      puVar2[10] = param_5;
      puVar2[9] = uVar1;
      puVar2[0xb] = param_6;
      if (param_7 == (undefined4 *)0x0) {
        puVar2[0x40] = 0;
        puVar2[1] = 1;
      }
      else {
        puVar4 = puVar2 + 0xc;
        for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *param_7;
          param_7 = param_7 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar2[0x40] = 1;
        puVar2[1] = 1;
      }
    }
    iVar3 = DAT_00695154;
    if (*(uint *)(DAT_00695154 + 0x24) < 0xff) {
      *(undefined4 **)(*(int *)(DAT_00695154 + 0x20) + *(uint *)(DAT_00695154 + 0x24) * 4) = puVar2;
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

