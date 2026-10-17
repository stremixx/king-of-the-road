
void FUN_00581070(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [12];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  iVar1 = FUN_0057c0a0(*(undefined4 *)(param_2 + 0x74));
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x188) == 2 || (*(int *)(iVar1 + 0x188) == 1)))) {
    if ((param_3 & 0x8000000) != 0) {
      local_108 = 0;
      local_104 = 0;
      local_100 = 0;
      local_114 = 0.0;
      local_110 = 0;
      local_10c = 0;
      FUN_004e2844(param_2 + 4,&local_108,&local_104,&local_100,&local_10c,&local_114,&local_110);
      local_114 = -local_114;
      FUN_005aad10(local_fc,param_4);
      FUN_005aad10(local_fc,param_4);
      uVar2 = FUN_005ab330(local_f0,local_108,local_104,local_100);
      uVar3 = FUN_0057d570(local_60);
      fVar7 = (float10)FUN_005aabc0(&local_114,uVar3,uVar2);
      uVar2 = FUN_005ab380(local_c0,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_114,local_110,
                           local_10c,(float)fVar7);
      uVar2 = FUN_005ab130(local_90,uVar2);
      puVar4 = (undefined4 *)FUN_005ab130(local_30,uVar2);
      puVar6 = (undefined4 *)(iVar1 + 0xc64);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    FUN_0057e1c0(param_1,param_2,iVar1);
    if (*(int *)(iVar1 + 0x188) == 2) {
      FUN_0058c630();
    }
    iVar5 = *param_1;
    fVar7 = (float10)FUN_004e1fd9();
    (**(code **)(iVar5 + 200))(iVar1,param_2,(float)fVar7);
    fVar7 = (float10)FUN_004e2035();
    param_1[0x312] = (int)(float)fVar7;
    return;
  }
  FUN_005800e0(param_1,param_2 + 0x34,param_2 + 0x40);
  return;
}

