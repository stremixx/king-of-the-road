
void FUN_005e9040(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  int local_8;
  
  uVar2 = param_2;
  FUN_0061e3d4(0,param_2);
  puVar1 = param_1;
  param_2 = (ushort *)(uint)(param_1[2] != 2);
  FUN_0061e3d4(param_2,uVar2);
  cVar3 = (puVar1[2] == 2) + '\x01';
  FUN_0061e3d4(cVar3,uVar2);
  FUN_005aa7e0(0,uVar2);
  FUN_005aa7e0(0x100,uVar2);
  FUN_0061e3d4(0x18,uVar2);
  FUN_005aa7e0(0,uVar2);
  FUN_005aa7e0(0,uVar2);
  uVar7 = (uint)*puVar1;
  FUN_005aa7e0(uVar7,uVar2);
  uVar9 = (uint)puVar1[1];
  FUN_005aa7e0(uVar9,uVar2);
  FUN_0061e3d4((-(uint)(puVar1[2] != 2) & 0xfffffff8) + 0x10,uVar2);
  FUN_0061e3d4(0x20,uVar2);
  if (param_2 != (ushort *)0x0) {
    iVar4 = thunk_FUN_005b5b70();
    param_2 = (ushort *)(iVar4 + 0x19);
    param_1 = (ushort *)0x100;
    do {
      FUN_0061e3d4(*(undefined1 *)((int)param_2 + 1),uVar2);
      FUN_0061e3d4(*(undefined1 *)param_2,uVar2);
      FUN_0061e3d4(*(undefined1 *)((int)param_2 + -1),uVar2);
      param_2 = (ushort *)((int)param_2 + 3);
      param_1 = (ushort *)((int)param_1 + -1);
    } while (param_1 != (ushort *)0x0);
  }
  if (cVar3 == '\x01') {
    FUN_0061d9d6(*(undefined4 *)(puVar1 + *(int *)(puVar1 + 8) * 2 + 0xc),uVar9 * uVar7,1,uVar2);
  }
  else if (cVar3 == '\x02') {
    if (*(int *)(puVar1 + 0x3a) == 0) {
      FUN_0061d9d6(*(undefined4 *)(puVar1 + *(int *)(puVar1 + 8) * 2 + 0xc),
                   puVar1[2] * uVar9 * uVar7,1,uVar2);
      return;
    }
    puVar5 = (ushort *)FUN_005d38b0(&param_1);
    iVar4 = FUN_005d3160();
    if (iVar4 == 3) {
      param_2 = (ushort *)0x0;
      if (puVar1[1] != 0) {
        do {
          FUN_0061d9d6(puVar5,puVar1[2] * uVar7,1,uVar2);
          puVar5 = (ushort *)((int)puVar5 + (int)param_1);
          param_2 = (ushort *)((int)param_2 + 1);
        } while ((int)param_2 < (int)(uint)puVar1[1]);
        FUN_005d3890(puVar5);
        return;
      }
    }
    else {
      param_2 = (ushort *)FUN_00631d33((uint)*puVar1 << 1);
      local_8 = 0;
      if (puVar1[1] != 0) {
        do {
          iVar4 = 0;
          puVar6 = puVar5;
          puVar8 = param_2;
          if (*puVar1 != 0) {
            do {
              *puVar8 = *puVar6 >> 1 & 0x7fe0 | *puVar6 & 0x1f;
              iVar4 = iVar4 + 1;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 < (int)(uint)*puVar1);
          }
          FUN_0061d9d6(param_2,puVar1[2] * uVar7,1,uVar2);
          puVar5 = (ushort *)((int)puVar5 + (int)param_1);
          local_8 = local_8 + 1;
        } while (local_8 < (int)(uint)puVar1[1]);
      }
      FUN_00631d5c(param_2);
    }
    FUN_005d3890(puVar5);
    return;
  }
  return;
}

