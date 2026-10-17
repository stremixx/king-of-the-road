
void __fastcall FUN_00512ce0(int param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 **ppuStack_3c;
  undefined4 *puStack_38;
  undefined1 **ppuStack_34;
  undefined1 **ppuStack_30;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_1c = (undefined1 *)0x1;
  puStack_20 = (undefined1 *)(DAT_006cdc38 + 0x278);
  piStack_24 = (int *)0x512cfc;
  ppuVar2 = (undefined1 **)FUN_0051b780();
  puStack_1c = local_c;
  puStack_20 = (undefined1 *)0x0;
  piStack_24 = (int *)0x10;
  uStack_28 = 0;
  local_8 = 0;
  puVar1 = *ppuVar2;
  ppuStack_2c = &PTR_DAT_006758f0;
  ppuStack_30 = (undefined1 **)0x512d1d;
  ppuStack_2c = (undefined **)FUN_0050b500();
  ppuStack_34 = (undefined1 **)0x512d25;
  ppuStack_30 = ppuVar2;
  (**(code **)(puVar1 + 0x10))();
  if (piStack_24 != (int *)0x0) {
    ppuStack_34 = &puStack_1c;
    ppuStack_3c = &puStack_20;
    puStack_38 = (undefined4 *)0x4;
    (**(code **)(*piStack_24 + 0xc))(piStack_24);
    (**(code **)(*ppuStack_34 + 8))(ppuStack_34);
  }
  if (((int)puStack_20 < 1) || (puStack_20 != (undefined1 *)0x4)) {
    puStack_38 = (undefined4 *)0x512dab;
    ppuStack_34 = ppuVar2;
    (**(code **)(*ppuVar2 + 8))();
    puStack_38 = (undefined4 *)0x512db2;
    FUN_00513080();
    puStack_38 = (undefined4 *)0x512db9;
    FUN_00512e30();
    puStack_38 = (undefined4 *)0x2;
    ppuStack_3c = (undefined1 **)(DAT_006cdc38 + 0x278);
    ppuVar2 = (undefined1 **)FUN_0051b780();
    puStack_38 = &uStack_28;
    ppuStack_3c = (undefined1 **)0x0;
    puVar1 = *ppuVar2;
    piVar4 = (int *)0x0;
    uVar3 = FUN_0050b500(&PTR_DAT_006758f0,0x1011);
    (**(code **)(puVar1 + 0xc))(ppuVar2,uVar3);
    ppuStack_3c = (undefined1 **)0x4;
    (**(code **)(*piVar4 + 0x10))(piVar4,&ppuStack_3c,4,&puStack_38);
  }
  else {
    ppuStack_34 = (undefined1 **)0x1;
    puStack_38 = (undefined4 *)&DAT_006d0d18;
    ppuStack_3c = ppuVar2;
    piStack_24 = (int *)FUN_00512aa0();
    if (piStack_24 == (int *)0x0) {
      puStack_38 = (undefined4 *)0x512d90;
      ppuStack_34 = ppuVar2;
      (**(code **)(*ppuVar2 + 8))();
      puStack_38 = (undefined4 *)0x512d97;
      FUN_00513080();
      puStack_38 = (undefined4 *)0x512d9e;
      FUN_00512e30();
      return;
    }
    ppuStack_34 = &puStack_1c;
    ppuStack_3c = (undefined1 **)(param_1 + 0x210);
    puStack_38 = (undefined4 *)0x178;
    (**(code **)(*piStack_24 + 0xc))(piStack_24);
  }
  (**(code **)(*ppuStack_34 + 8))(ppuStack_34);
  (**(code **)(*ppuVar2 + 8))(ppuVar2);
  FUN_00513f70();
  return;
}

