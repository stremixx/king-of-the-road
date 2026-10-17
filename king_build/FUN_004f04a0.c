
void __fastcall FUN_004f04a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_c0 [12];
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [52];
  
  puStack_7c = &local_40;
  puStack_80 = &local_48;
  puStack_84 = &local_50;
  puStack_88 = &local_58;
  puStack_8c = &local_60;
  puStack_90 = &local_68;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  puVar3 = auStack_c0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_005de000();
  puVar1 = (undefined4 *)
           FUN_005da010(local_38,local_68,local_64,local_60,local_5c,local_58,local_54,local_50,
                        local_4c,local_48,local_44,local_40,local_3c);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_7c = &local_68;
  puStack_80 = (undefined4 *)0x4f054c;
  FUN_004f0270();
  return;
}

