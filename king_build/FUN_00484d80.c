
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00484d80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  float10 fVar13;
  char cStack0000000c;
  undefined1 uStack00000026;
  int iStack00000028;
  int in_stack_00008844;
  void *in_stack_00008848;
  undefined4 *in_stack_00008858;
  int in_stack_0000885c;
  int in_stack_00008860;
  int in_stack_00008864;
  double *in_stack_00008868;
  undefined4 uStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_006404f1;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_0061d4f0();
  local_4 = 0;
  if (in_stack_00008860 == -1) {
    FUN_00401010();
  }
  if (in_stack_00008864 == -1) {
    FUN_00401010();
  }
  *(undefined4 *)in_stack_00008868 = 0;
  *(undefined4 *)((int)in_stack_00008868 + 4) = 0;
  if (in_stack_00008860 == in_stack_00008864) {
    FUN_00478a20();
    uStack00000026 = 0xff;
    if (param_1 == param_2) {
      FUN_0047b880();
    }
    else {
      FUN_00487db0();
    }
    uStack_c._0_3_ = CONCAT12(uStack_c._3_1_,(ushort)uStack_c);
    FUN_004abe00();
    uVar3 = FUN_0046f490();
    in_stack_00008858[1] = uVar3;
    local_4 = 1;
    FUN_0044a4e0();
  }
  else if (*(char *)(*(int *)(*(int *)(DAT_0068be60 + in_stack_00008860 * 4) + 0xc4 +
                             in_stack_0000885c * 4) + in_stack_00008864) == -1) {
    FUN_00478a20();
    FUN_00487830();
    FUN_0044a4e0();
    iVar1 = DAT_0068be60;
    uVar7 = 0;
    if (DAT_0068be64 - DAT_0068be60 >> 2 != 0) {
      iVar10 = DAT_0068be64 - DAT_0068be60;
      puVar4 = &DAT_0068c820;
      do {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0x7fefffff;
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar7 < (uint)(iVar10 >> 2));
    }
    iVar10 = 0;
    local_8 = (undefined1 *)0x0;
    if (0 < *(int *)(*(int *)(iVar1 + in_stack_00008860 * 4) + 0x10)) {
      do {
        FUN_00460970();
        iVar10 = iVar10 + 1;
        uStack_c._0_3_ = (uint3)(ushort)uStack_c;
        FUN_004608a0();
        local_8 = (undefined1 *)((int)local_8 + 1);
      } while ((int)local_8 < *(int *)(*(int *)(DAT_0068be60 + in_stack_00008860 * 4) + 0x10));
    }
    uStack_c._0_3_ = CONCAT12(1,(ushort)uStack_c);
    FUN_004608a0();
    FUN_00460970();
    iVar10 = iVar10 + 1;
    local_8 = (undefined1 *)(*(int *)(*(int *)(DAT_0068be60 + in_stack_00008860 * 4) + 0x10) + 1);
    if (local_8 < (uint)(DAT_0068be64 - DAT_0068be60 >> 2)) {
      do {
        FUN_00460970();
        iVar10 = iVar10 + 1;
        uStack_c._0_3_ = (uint3)(ushort)uStack_c;
        FUN_004608a0();
        local_8 = (undefined1 *)((int)local_8 + 1);
      } while (local_8 < (uint)(DAT_0068be64 - DAT_0068be60 >> 2));
    }
    iVar1 = *(int *)(*(int *)(DAT_0068be60 + in_stack_00008860 * 4) + 0x10);
    (&DAT_0068c820)[iVar1 * 2] = 0;
    (&DAT_0068c824)[iVar1 * 2] = 0;
    piVar11 = (int *)(&stack0x00000840 + iVar10 * 4);
    if ((int *)&stack0x00000840 != piVar11) {
      do {
        if ((int *)&stack0x00000840 == piVar11) {
          piVar9 = (int *)&stack0x00000840;
        }
        else {
          piVar9 = (int *)&stack0x00000840;
          for (piVar8 = (int *)&stack0x00000844; piVar8 != piVar11; piVar8 = piVar8 + 1) {
            if (*(double *)(&DAT_0068c820 + *piVar8 * 2) < *(double *)(&DAT_0068c820 + *piVar9 * 2))
            {
              piVar9 = piVar8;
            }
          }
        }
        iVar1 = *piVar9;
        if (_DAT_0064ac20 <= *(double *)(&DAT_0068c820 + iVar1 * 2)) {
          FUN_00484d50();
          *(undefined4 *)in_stack_00008868 = 0xffffffff;
          *(undefined4 *)((int)in_stack_00008868 + 4) = 0x7fefffff;
          *in_stack_00008858 = 0;
          in_stack_00008858[1] = 0;
          in_stack_00008858[2] = 0;
          local_4 = 1;
          for (puVar12 = &stack0x00002844; puVar12 != &stack0x00002844 + in_stack_00008844 * 0xc;
              puVar12 = puVar12 + 0xc) {
            FUN_00487dd0();
          }
          ExceptionList = in_stack_00008848;
          return in_stack_00008858;
        }
        if (iVar1 == in_stack_00008864) {
          uStack00000026 = 0xff;
          if (*(int *)(&stack0x00002848 + iVar1 * 0xc) == *(int *)(&stack0x0000284c + iVar1 * 0xc))
          {
            FUN_0047b880();
          }
          else {
            FUN_00487db0();
            *(int *)(&stack0x00002848 + iVar1 * 0xc) =
                 *(int *)(&stack0x00002848 + iVar1 * 0xc) + 0xc;
          }
          *(undefined4 *)in_stack_00008868 = (&DAT_0068c820)[iVar1 * 2];
          *(undefined4 *)((int)in_stack_00008868 + 4) = (&DAT_0068c824)[iVar1 * 2];
          FUN_00484ce0();
          if (*in_stack_00008868 < _DAT_0064ac20) {
            uStack_c._0_3_ = CONCAT12(uStack_c._3_1_,(ushort)uStack_c);
            FUN_004abe00();
            uVar3 = FUN_0046f490();
            in_stack_00008858[1] = uVar3;
            local_4 = 1;
            for (puVar12 = &stack0x00002844; puVar12 != &stack0x00002844 + in_stack_00008844 * 0xc;
                puVar12 = puVar12 + 0xc) {
              FUN_00487dd0();
            }
            ExceptionList = in_stack_00008848;
            return in_stack_00008858;
          }
          local_4 = 1;
          *in_stack_00008858 = 0;
          in_stack_00008858[1] = 0;
          in_stack_00008858[2] = 0;
          for (puVar12 = &stack0x00002844; puVar12 != &stack0x00002844 + in_stack_00008844 * 0xc;
              puVar12 = puVar12 + 0xc) {
            FUN_00487dd0();
          }
          ExceptionList = in_stack_00008848;
          return in_stack_00008858;
        }
        if (piVar9 + 1 != piVar11) {
          FUN_00457bc0();
        }
        iVar10 = iVar10 + -1;
        (&stack0x0000003c)[iVar1] = 1;
        FUN_00484ce0();
        _cStack0000000c = 0;
        iStack00000028 = 0x18;
        do {
          iVar2 = *(int *)(DAT_0068be60 + iVar1 * 4);
          piVar11 = *(int **)(iStack00000028 + -4 + iVar2);
          if (piVar11 != *(int **)(iStack00000028 + iVar2)) {
            do {
              iVar2 = *(int *)(*piVar11 + (_cStack0000000c ^ 1) * 4 + 0x70);
              if ((&stack0x0000003c)[*(int *)(iVar2 + 0x10)] == '\0') {
                fVar13 = (float10)FUN_004098e0();
                if (fVar13 + (float10)*(double *)(&DAT_0068c820 + iVar1 * 2) <
                    (float10)*(double *)(&DAT_0068c820 + *(int *)(iVar2 + 0x10) * 2)) {
                  *(double *)(&DAT_0068c820 + *(int *)(iVar2 + 0x10) * 2) =
                       (double)(fVar13 + (float10)*(double *)(&DAT_0068c820 + iVar1 * 2));
                  iVar6 = *(int *)(iVar2 + 0x10) * 0xc;
                  piVar9 = (int *)(&stack0x00002844 + iVar6);
                  if ((int *)(&stack0x00002844 + iVar1 * 0xc) != piVar9) {
                    uVar7 = (*(int *)(&stack0x00002848 + iVar1 * 0xc) -
                            *(int *)(&stack0x00002844 + iVar1 * 0xc)) / 0xc;
                    if ((uint)((*(int *)(&stack0x0000284c + iVar6) - *piVar9) / 0xc) < uVar7) {
                      iVar5 = FUN_00459420();
                      if ((*(int *)(&stack0x0000284c + iVar6) - *piVar9) / 0xc != 0) {
                        FUN_0044b440();
                      }
                      *piVar9 = iVar5;
                      *(uint *)(&stack0x0000284c + iVar6) = iVar5 + uVar7 * 0xc;
                    }
                    else if ((uint)((*(int *)(&stack0x00002848 + iVar6) - *piVar9) / 0xc) < uVar7) {
                      FUN_0045aa20();
                      FUN_0046f490();
                    }
                    else {
                      FUN_0047c830();
                    }
                    *(uint *)(&stack0x00002848 + iVar6) = *piVar9 + uVar7 * 0xc;
                  }
                  iVar6 = (int)piVar11 -
                          *(int *)(iStack00000028 + -4 + *(int *)(DAT_0068be60 + iVar1 * 4)) >> 2;
                  param_2 = (uint)CONCAT11((char)((uint)param_2 >> 0x18),
                                           cStack0000000c << 7 | (byte)iVar6) << 0x10;
                  iVar6 = *(int *)(*(int *)(iStack00000028 + -4 + *(int *)(DAT_0068be60 + iVar1 * 4)
                                           ) + iVar6 * 4);
                  iVar2 = *(int *)(iVar2 + 0x10);
                  piVar9 = *(int **)(&stack0x00002848 + iVar2 * 0xc);
                  if (piVar9 == *(int **)(&stack0x0000284c + iVar2 * 0xc)) {
                    FUN_0047b880();
                  }
                  else {
                    if (piVar9 != (int *)0x0) {
                      *piVar9 = iVar1;
                      piVar9[1] = iVar6;
                      piVar9[2] = param_2;
                    }
                    *(int *)(&stack0x00002848 + iVar2 * 0xc) =
                         *(int *)(&stack0x00002848 + iVar2 * 0xc) + 0xc;
                  }
                }
              }
              piVar11 = piVar11 + 1;
            } while (piVar11 != *(int **)(*(int *)(DAT_0068be60 + iVar1 * 4) + iStack00000028));
          }
          iStack00000028 = iStack00000028 + 0xc;
          _cStack0000000c = _cStack0000000c + 1;
        } while (iStack00000028 < 0x30);
        piVar11 = (int *)(&stack0x00000840 + iVar10 * 4);
      } while ((int *)&stack0x00000840 != piVar11);
    }
    local_4 = 1;
    *in_stack_00008858 = 0;
    in_stack_00008858[1] = 0;
    in_stack_00008858[2] = 0;
    for (puVar12 = &stack0x00002844; puVar12 != &stack0x00002844 + in_stack_00008844 * 0xc;
        puVar12 = puVar12 + 0xc) {
      FUN_0046e090();
    }
  }
  else {
    FUN_00484910();
  }
  ExceptionList = in_stack_00008848;
  return in_stack_00008858;
}

