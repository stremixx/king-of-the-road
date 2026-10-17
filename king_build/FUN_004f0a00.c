
undefined4 __fastcall FUN_004f0a00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_c0 [12];
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [52];
  
  if (*(int *)(param_1 + 0x3344) == 0) {
    return 1;
  }
  puStack_7c = local_40;
  puStack_80 = local_48;
  puStack_84 = &local_50;
  puStack_88 = &local_58;
  puStack_8c = &local_60;
  puStack_90 = &local_68;
  puVar2 = (undefined4 *)(param_1 + 0x10);
  puVar3 = auStack_c0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_005de000();
  FUN_005da010(local_38,local_68,local_64,local_60,local_5c,local_58,local_54,local_50,local_4c,0,0,
               0,0);
  puStack_80 = *(undefined1 **)(param_1 + 0xf4);
  puStack_7c = local_38;
  puStack_84 = (undefined4 *)0x2;
  puStack_88 = (undefined4 *)0x4f0aab;
  FUN_004f0ac0();
  puStack_7c = (undefined1 *)0x4f0ab2;
  FUN_004ef8d0();
  return 0;
}

