
void FUN_0056eda0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_118;
  float *pfStack_114;
  float *pfStack_110;
  float local_104;
  float local_100;
  int local_fc;
  undefined1 *local_f8;
  undefined4 local_f4 [4];
  double local_e4;
  double local_dc;
  undefined4 local_cc [2];
  double local_c4;
  undefined4 *puStack_98;
  int iStack_90;
  undefined4 *puStack_8c;
  int iStack_84;
  undefined4 *puStack_80;
  int iStack_78;
  undefined4 *puStack_74;
  int iStack_6c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646d6b;
  pvStack_c = ExceptionList;
  local_100 = 0.0;
  local_104 = 0.0;
  pfStack_110 = (float *)0x56edd6;
  ExceptionList = &pvStack_c;
  FUN_004184d0();
  pfStack_110 = (float *)&local_fc;
  iVar3 = 0;
  local_4 = 0;
  pfStack_114 = (float *)0x56ede9;
  FUN_00568670();
  if (local_fc != DAT_0068a8f0) {
    local_f4[0] = 0;
    while( true ) {
      pfStack_110 = (float *)local_cc;
      local_f8 = (undefined1 *)&uStack_118;
      pfStack_114 = (float *)iVar3;
      FUN_0041d3f0(&local_fc);
      iVar1 = FUN_00442320();
      if (iVar1 != 0) break;
      pfStack_110 = (float *)local_f4;
      pfStack_114 = (float *)local_cc[0];
      uStack_118 = 0x56ee2f;
      FUN_004402b0();
      iVar3 = iVar3 + 1;
      local_104 = (float)((float10)local_e4 * (float10)local_c4 + (float10)local_104);
      local_100 = (float)((float10)local_dc * (float10)local_c4 + (float10)local_100);
    }
    pfStack_110 = &local_104;
    pfStack_114 = &local_100;
    uStack_118 = 0x56ee72;
    (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0xa8))();
  }
  pfStack_110 = *(float **)(DAT_006d0fd8 + 0x268);
  pfStack_114 = (float *)0x56ee84;
  FUN_0051f7e0();
  uVar2 = iStack_6c - (int)puStack_74;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      pfStack_110 = (float *)0x56eec2;
      FUN_00401aa0();
      *puStack_74 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puStack_74;
      pfStack_110 = (float *)0x56eed2;
      FUN_00434030();
    }
    else {
      pfStack_110 = (float *)puStack_74;
      pfStack_114 = (float *)0x56eea6;
      FUN_0061c888();
    }
  }
  uVar2 = iStack_78 - (int)puStack_80;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      pfStack_110 = (float *)0x56ef0d;
      FUN_00401aa0();
      *puStack_80 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puStack_80;
      pfStack_110 = (float *)0x56ef1d;
      FUN_00434030();
    }
    else {
      pfStack_110 = (float *)puStack_80;
      pfStack_114 = (float *)0x56eef1;
      FUN_0061c888();
    }
  }
  uVar2 = iStack_84 - (int)puStack_8c;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      pfStack_110 = (float *)0x56ef58;
      FUN_00401aa0();
      *puStack_8c = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puStack_8c;
      pfStack_110 = (float *)0x56ef68;
      FUN_00434030();
    }
    else {
      pfStack_110 = (float *)puStack_8c;
      pfStack_114 = (float *)0x56ef3c;
      FUN_0061c888();
    }
  }
  uVar2 = iStack_90 - (int)puStack_98;
  if (uVar2 != 0) {
    if (0x80 < uVar2) {
      pfStack_110 = (float *)puStack_98;
      pfStack_114 = (float *)0x56ef81;
      FUN_0061c888();
      ExceptionList = pvStack_c;
      return;
    }
    pfStack_110 = (float *)0x56efb2;
    FUN_00401aa0();
    *puStack_98 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
    *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puStack_98;
    pfStack_110 = (float *)0x56efc2;
    FUN_00434030();
  }
  ExceptionList = pvStack_c;
  return;
}

