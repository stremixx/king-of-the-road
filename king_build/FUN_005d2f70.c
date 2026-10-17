
void __thiscall FUN_005d2f70(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2[3] != 0) {
    *(undefined4 *)(param_2[3] + 0x18) = param_2[4];
    if (param_2[5] == 0) {
      DAT_0071f078 = param_2[3];
      iVar3 = FUN_005d21d0(param_2);
      if (iVar3 == 0) {
        FUN_005d2cb0(0);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_0061c369(&DAT_0071f034,s_BEGIN_TASK__s__d_0067ec1c,*(undefined4 *)(param_2[3] + 0x1c),
                     *(undefined4 *)(param_2[3] + 0x14));
        pcVar4 = &DAT_0071f034;
        cVar1 = DAT_0071f034;
        if (DAT_0071d774 != 0) {
          for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
          {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
            cVar1 = *pcVar4;
          }
        }
      }
      (**(code **)(*(int *)param_2[3] + 0x14))();
      if ((*(int *)(param_1 + 0x14) != 0) &&
         (pcVar4 = s_END_TASK_0067ec10, cVar1 = s_END_TASK_0067ec10[0], DAT_0071d774 != 0)) {
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *pcVar4;
        }
      }
      DAT_0071f078 = 0;
      iVar3 = FUN_005d21d0(param_2);
      if (iVar3 == 0) {
        FUN_005d2cb0(1);
      }
      *(int *)(param_2[3] + 0x10) = *(int *)(param_2[3] + 0x10) + 1;
      FUN_005d3110(param_2);
      if (param_2 != (undefined4 *)0x0) {
        (**(code **)*param_2)(1);
        return;
      }
    }
    else if (param_2[5] == 2) {
      *(undefined4 *)(param_2[3] + 0x10) = 0;
      (**(code **)(*(int *)param_2[3] + 0x14))();
      *(int *)(param_2[3] + 0x10) = *(int *)(param_2[3] + 0x10) + 1;
      FUN_005d3110(param_2);
      if (param_2 != (undefined4 *)0x0) {
        (**(code **)*param_2)(1);
        return;
      }
    }
    else {
      puVar2 = (undefined4 *)param_2[3];
      FUN_005d2c60(puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}

