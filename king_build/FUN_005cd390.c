
undefined4 __thiscall
FUN_005cd390(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  char *pcVar8;
  
  if (param_2 != 0) {
    if (*(int **)(param_2 + 0x2c) == (int *)0x0) {
      pcVar8 = *(char **)(*(int *)(param_2 + 0x24) + 0x3c);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = s_unknown_0067e994;
      }
      FUN_0061c369(&DAT_0070cdf8,s_vrNodeTreeShadow_node____NULL____0067e8f8,pcVar8,
                   (double)*(float *)(param_2 + 0x14),(double)*(float *)(param_2 + 0x18),
                   (double)*(float *)(param_2 + 0x1c));
      FUN_005d2250(&DAT_0070cdf8,0);
    }
    else {
      if (param_3 == 0) {
        pcVar8 = *(char **)(*(int *)(param_2 + 0x24) + 0x3c);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = s_unknown_0067e994;
        }
        FUN_0061c369(&DAT_0070c818,s_vrNodeTreeShadow_mat____NULL_in_m_0067e958,pcVar8,
                     (double)*(float *)(param_2 + 0x14),(double)*(float *)(param_2 + 0x18),
                     (double)*(float *)(param_2 + 0x1c));
        FUN_005d2250(&DAT_0070c818,0);
        return 0;
      }
      (**(code **)(**(int **)(param_2 + 0x2c) + 0x14))(0,param_1);
      *(int *)(param_1 + 0xa4) = param_2;
      *(undefined4 *)(param_1 + 0xd0) = param_5;
      *(int *)(param_1 + 0x40) = param_3;
      *(undefined4 *)(param_1 + 0x14) = *param_4;
      *(undefined4 *)(param_1 + 0x18) = param_4[1];
      *(undefined4 *)(param_1 + 0x1c) = param_4[2];
      *(undefined4 *)(param_1 + 0x20) = param_5;
      if (DAT_0070db4c != (code *)0x0) {
        pfVar1 = (float *)(param_1 + 0xc4);
        iVar7 = (*DAT_0070db4c)(*(undefined4 *)(param_2 + 0x2c),param_4,param_1 + 0xd4,pfVar1);
        if (iVar7 != 0) {
          pfVar2 = (float *)(param_1 + 0xac);
          fVar3 = DAT_00701580 * *(float *)(param_1 + 0xcc);
          fVar4 = DAT_00701588 * *pfVar1;
          fVar5 = DAT_00701584 * *pfVar1;
          fVar6 = DAT_00701580 * *(float *)(param_1 + 200);
          *pfVar2 = DAT_00701588 * *(float *)(param_1 + 200) -
                    DAT_00701584 * *(float *)(param_1 + 0xcc);
          *(float *)(param_1 + 0xb0) = fVar3 - fVar4;
          *(float *)(param_1 + 0xb4) = fVar5 - fVar6;
          *(float *)(param_1 + 0xb8) =
               *(float *)(param_1 + 200) * *(float *)(param_1 + 0xb4) -
               *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xb0);
          *(float *)(param_1 + 0xbc) =
               *(float *)(param_1 + 0xcc) * *pfVar2 - *pfVar1 * *(float *)(param_1 + 0xb4);
          *(float *)(param_1 + 0xc0) =
               *pfVar1 * *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 200) * *pfVar2;
          *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
          return 1;
        }
      }
    }
  }
  return 0;
}

