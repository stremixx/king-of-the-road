
void FUN_004e71df(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  fVar3 = (float10)FUN_005aabc0(param_1);
  local_14 = (float)fVar3;
  local_8 = 0x420c0000;
  local_c = 0x40a00000;
  local_18 = 0x3f000000;
  local_10 = 0x41a00000;
  if (local_14 <= 35.0) {
    if (5.0 < local_14) {
      uVar2 = FUN_004bdd80(local_30,param_1,(local_14 - 5.0) * 0.5 + 5.0,local_14);
      puVar1 = (undefined4 *)FUN_004e1030(local_3c,uVar2);
      *param_1 = *puVar1;
      param_1[1] = puVar1[1];
      param_1[2] = puVar1[2];
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_004bdd80(local_24,param_1,20.0 / local_14);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
  }
  return;
}

