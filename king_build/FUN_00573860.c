
bool FUN_00573860(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 *puVar4;
  undefined1 local_140 [128];
  undefined1 local_c0 [8];
  int local_b8;
  undefined4 local_90;
  int local_88;
  undefined4 local_70;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar2 = FUN_0043f700(param_4);
  puVar4 = local_c0;
  uVar3 = extraout_ECX;
  FUN_0041d3f0(&param_4);
  FUN_0043fd20(uVar3,puVar4);
  iVar1 = param_3 + 0x17;
  FUN_005e97e0(param_1,param_2 + 0x2d,iVar1,0x46,DAT_006cdc84,local_90,6,0);
  uVar3 = __ftol(0x25);
  FUN_0061c369(local_140,&DAT_0067b320,uVar3);
  FUN_005e97a0(param_1,param_2 + 0x87,iVar1,DAT_006cdc84,local_140,6,0);
  FUN_0061c369(local_140,&DAT_0066b8cc,local_70);
  FUN_005e97a0(param_1,param_2 + 0xdc,iVar1,DAT_006cdc84,local_140,6,0);
  FUN_0061c369(local_140,s__4_1f_0067b318,local_50,local_4c);
  FUN_005e97a0(param_1,param_2 + 0x10e,iVar1,DAT_006cdc84,local_140,6,0);
  if ((uVar2 & 0x1000) != 0) {
    FUN_005b8030(param_1,param_2,param_3,*(undefined4 *)(&DAT_006f1d98 + local_88 * 4),0);
  }
  return local_b8 == 1;
}

