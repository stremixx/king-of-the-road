
undefined4 FUN_005d6950(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  piVar1 = *(int **)(param_4 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x34) = 0;
  }
  piVar1 = *(int **)(param_4 + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x78) = 0;
  }
  piVar1 = *(int **)(param_4 + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x40) = 0;
  }
  piVar1 = *(int **)(param_4 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_4 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x38) = 0;
  }
  piVar1 = *(int **)(param_4 + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_4 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_4 + 0x2c) = 0;
  }
  piVar2 = *(int **)(param_4 + 0x28);
  piVar1 = (int *)(param_4 + 0x28);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  *(undefined4 *)(param_4 + 100) = 0;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x24) = 0;
  *(undefined4 *)(param_4 + 0x50) = 0;
  *(undefined4 *)(param_4 + 0xcc) = 0x80070057;
  iVar3 = DirectDrawCreateEx(param_1,piVar1,&DAT_00654490,0);
  if (iVar3 != 0) goto LAB_005d6b5f;
  iVar3 = (**(code **)(*(int *)*piVar1 + 0x50))
                    ((int *)*piVar1,DAT_0071f880,
                     -(uint)((*(uint *)(param_4 + 0xc) & 0x400) != 0) & 0x1053 | 8);
  if (iVar3 != 0) {
    FUN_0061c369(param_4 + 0x7c,s_fail_in_SetCoop____00681864);
    goto LAB_005d6b5f;
  }
  piVar2 = (int *)*piVar1;
  *(int **)(param_4 + 0x2c) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  piVar2 = *(int **)(param_4 + 0x2c);
  if (piVar2 == (int *)0x0) {
    FUN_0061c369(param_4 + 0x7c,s_can_not_query_dd2_object_00681878);
    goto LAB_005d6b5f;
  }
  if ((*(uint *)(param_4 + 0xc) & 0x1000) == 0) {
    iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,0,0,param_4,&LAB_005d4240);
    if ((iVar3 == 0) && (*(int *)(param_4 + 0x18) != 0)) {
      iVar3 = 0;
      if ((*(uint *)(param_4 + 0xc) & 0x8000) != 0) {
        iVar3 = FUN_005d64f0(param_4);
      }
    }
    else {
      FUN_0061c369(param_4 + 0x7c,s_can_not_find_video_mode_006818c4);
      iVar3 = -0x7ff8ffa9;
    }
    goto LAB_005d6b5f;
  }
  iVar3 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_00654480,param_4 + 0x30);
  if ((iVar3 != 0) || (piVar2 = *(int **)(param_4 + 0x30), piVar2 == (int *)0x0)) {
    FUN_0061c369(param_4 + 0x7c,s_can_not_query_d3d2_object_00681894);
    goto LAB_005d6b5f;
  }
  *(uint *)(param_4 + 0x14) = (*(int *)(param_4 + 8) != 1) + 1;
  switch(*(int *)(param_4 + 8)) {
  case 1:
    *(undefined4 *)(param_4 + 0x10) = 0x800;
    break;
  case 2:
    *(undefined4 *)(param_4 + 0x10) = 0x400;
    break;
  case 3:
    *(undefined4 *)(param_4 + 0x10) = 0x200;
    break;
  case 4:
    *(undefined4 *)(param_4 + 0x10) = 0x100;
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,&LAB_005d3fb0,param_4);
  if ((iVar3 == 0) && (*(int *)(param_4 + 100) != 0)) {
    if ((*(uint *)(param_4 + 0xc) & 0x400) == 0) {
      *(undefined4 *)(param_4 + 0x18) = 1;
LAB_005d6b0f:
      iVar3 = 0;
      if (*(int *)(param_4 + 0x18) != 0) {
        if (((*(uint *)(param_4 + 0xc) & 0x8000) != 0) &&
           (iVar3 = FUN_005d64f0(param_4), iVar3 == 0)) {
          uVar4 = FUN_005d6860(*(undefined4 *)(param_4 + 0x2c));
          *(undefined4 *)(param_4 + 0x20) = uVar4;
        }
        goto LAB_005d6b5f;
      }
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_4 + 0x2c) + 0x20))
                        (*(int **)(param_4 + 0x2c),0,0,param_4,&LAB_005d4240);
      if (iVar3 == 0) goto LAB_005d6b0f;
    }
    pcVar5 = s_can_not_find_video_mode_006818c4;
  }
  else {
    pcVar5 = s_can_not_find_device_006818b0;
  }
  FUN_0061c369(param_4 + 0x7c,pcVar5);
  iVar3 = -0x7ff8ffa9;
LAB_005d6b5f:
  *(int *)(param_4 + 0xcc) = iVar3;
  if (iVar3 != 0) {
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x50))(piVar1,DAT_0071f880,8);
    }
    return 1;
  }
  FUN_005d68e0(*(undefined4 *)(param_4 + 0x2c),&DAT_0071f6d0);
  return 0;
}

