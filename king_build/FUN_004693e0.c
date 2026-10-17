
void FUN_004693e0(uint *param_1,int *param_2)

{
  uint uVar1;
  LONG LVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f7c8;
  local_c = ExceptionList;
  uVar1 = *param_1;
  puVar5 = (uint *)0x0;
  local_1c = 0;
  ExceptionList = &local_c;
  if (DAT_0064a978 <= uVar1) {
    puVar3 = puVar5;
    piVar4 = param_2;
    ExceptionList = &local_c;
    do {
      puVar5 = puVar3;
      if (*piVar4 != 0) {
        local_4 = 0;
        puVar5 = (uint *)FUN_00462f30(*piVar4,puVar3);
        if (*(uint *)(&DAT_0064a974 + (uint)*(byte *)((int)puVar5 + 0xd) * 4) <= *puVar5) {
          *(undefined1 *)(puVar5 + 3) = 1;
        }
        LVar2 = InterlockedDecrement((LONG *)(*piVar4 + 4));
        if (LVar2 == 0) {
          FUN_0044f150();
        }
        *piVar4 = 0;
        local_4 = 0xffffffff;
        if ((puVar3 != (uint *)0x0) &&
           (LVar2 = InterlockedDecrement((LONG *)(puVar3 + 1)), LVar2 == 0)) {
          FUN_0044f150();
        }
      }
      piVar4 = piVar4 + 1;
      local_1c = local_1c + 1;
      puVar3 = puVar5;
    } while (*(uint *)(((int)&DAT_0064a978 - (int)param_2) + (int)piVar4) <= uVar1);
  }
  local_4 = 1;
  puVar3 = (uint *)FUN_00462f30(puVar5,param_1);
  if (*(uint *)(&DAT_0064a974 + (uint)*(byte *)((int)puVar3 + 0xd) * 4) <= *puVar3) {
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  local_4 = 0xffffffff;
  if ((puVar5 != (uint *)0x0) && (LVar2 = InterlockedDecrement((LONG *)(puVar5 + 1)), LVar2 == 0)) {
    FUN_0044f150();
  }
  piVar4 = param_2 + local_1c;
  do {
    puVar5 = puVar3;
    if (*piVar4 == 0) goto switchD_00469625_default;
    local_4 = 2;
    puVar5 = (uint *)FUN_00462f30(*piVar4,puVar3);
    if (*(uint *)(&DAT_0064a974 + (uint)*(byte *)((int)puVar5 + 0xd) * 4) <= *puVar5) {
      *(undefined1 *)(puVar5 + 3) = 1;
    }
    puVar6 = (undefined4 *)*piVar4;
    LVar2 = InterlockedDecrement(puVar6 + 1);
    if (LVar2 != 0) goto switchD_0046957f_default;
    switch((char)puVar6[2]) {
    case '\0':
      if (puVar6[5] != puVar6[4]) {
        FUN_0045aa00();
      }
      FUN_0045a9e0(puVar6[5],*puVar6);
      FUN_0044b440(puVar6,0x18);
      goto switchD_0046957f_default;
    case '\x01':
      FUN_0045aa00();
      FUN_0044b580();
      FUN_0044b580();
      uVar7 = 0x1c;
      break;
    case '\x02':
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = puVar6 + -1;
      }
      FUN_00459f00();
      uVar7 = 0x28;
      break;
    case '\x03':
      FUN_00459e60();
      uVar7 = 0x1c;
      break;
    default:
      goto switchD_0046957f_default;
    }
    FUN_0044b440(puVar6,uVar7);
switchD_0046957f_default:
    *piVar4 = 0;
    local_4 = 0xffffffff;
    if ((puVar3 == (uint *)0x0) || (LVar2 = InterlockedDecrement((LONG *)(puVar3 + 1)), LVar2 != 0))
    goto switchD_00469625_default;
    switch((char)puVar3[2]) {
    case '\0':
      if (puVar3[5] != puVar3[4]) {
        FUN_0045aa00();
      }
      FUN_0045a9e0(puVar3[5],*puVar3);
      FUN_0044b440(puVar3,0x18);
      goto switchD_00469625_default;
    case '\x01':
      FUN_0045aa00();
      FUN_0044b580();
      FUN_0044b580();
      uVar7 = 0x1c;
      break;
    case '\x02':
      puVar3 = puVar3 + -1;
      FUN_00459f00();
      uVar7 = 0x28;
      break;
    case '\x03':
      FUN_00459e60();
      uVar7 = 0x1c;
      break;
    default:
      goto switchD_00469625_default;
    }
    FUN_0044b440(puVar3,uVar7);
switchD_00469625_default:
    if (local_1c == 0x2d) {
      param_2[0x2d] = (int)puVar5;
      ExceptionList = local_c;
      return;
    }
    if (*puVar5 < *(uint *)((int)piVar4 + ((int)&DAT_0064a978 - (int)param_2))) {
      param_2[local_1c] = (int)puVar5;
      ExceptionList = local_c;
      return;
    }
    local_1c = local_1c + 1;
    piVar4 = piVar4 + 1;
    puVar3 = puVar5;
  } while( true );
}

