
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00456410(int *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
                  double param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  bool bVar5;
  int *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  double local_2c;
  double local_24;
  double local_1c;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0063ec00;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_c = 0;
  do {
    local_4c = param_2;
    if (param_2 == param_3) {
      iVar4 = (int)local_34 - (int)local_38 >> 2;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (iVar4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0044b6e0();
      }
      *param_1 = iVar2;
      param_1[1] = iVar2;
      param_1[2] = iVar2 + iVar4 * 4;
      local_c = CONCAT31(local_c._1_3_,1);
      iVar4 = FUN_0046b5a0(local_38,local_34,iVar2,local_4c);
      puVar1 = local_38;
      param_1[1] = iVar4;
      iVar4 = (int)local_30 - (int)local_38 >> 2;
      if (iVar4 != 0) {
        uVar3 = iVar4 * 4;
        if (0x80 < uVar3) {
          FUN_0061c888();
          *unaff_FS_OFFSET = local_14;
          return param_1;
        }
        FUN_00401aa0();
        *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar1;
        DAT_0068c164 = 0;
      }
      *unaff_FS_OFFSET = local_14;
      return param_1;
    }
    iVar4 = *(int *)(DAT_0068be60 + *param_2 * 4);
    local_48 = *(undefined4 *)(iVar4 + 0x38);
    uStack_44 = *(undefined4 *)(iVar4 + 0x3c);
    local_40 = *(undefined4 *)(iVar4 + 0x30);
    uStack_3c = *(undefined4 *)(iVar4 + 0x34);
    FUN_00405ea0(*(double *)(iVar4 + 0x30) - _DAT_0068aa10,*(double *)(iVar4 + 0x38) - _DAT_0068aa18
                 ,*(double *)(iVar4 + 0x40) - _DAT_0068aa20);
    if (param_6 <= SQRT(local_2c * local_2c + local_1c * local_1c + local_24 * local_24)) {
      if (param_4 == 0) {
        if ((*(byte *)(param_2 + 1) & 0x2c) == 0) {
          bVar5 = param_2[2] == DAT_0068a8f0;
LAB_0045655d:
          if (bVar5) {
            if (local_34 == local_30) {
              FUN_00456150(local_34,&local_4c);
            }
            else {
              if (local_34 != (undefined4 *)0x0) {
                *local_34 = local_4c;
              }
              local_34 = local_34 + 1;
            }
          }
        }
      }
      else if (param_4 == 1) {
        if ((*(byte *)(param_2 + 1) & 0x20) != 0) {
          bVar5 = param_2[2] == DAT_0068a8f0;
          goto LAB_0045655d;
        }
      }
      else if (param_4 == 2) {
        if ((*(byte *)(param_2 + 1) & 8) != 0) {
          bVar5 = param_2[2] == DAT_0068a8f0;
          goto LAB_0045655d;
        }
      }
      else {
        FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1235,
                     s_Internal_error_3019_0066e494,&DAT_0068c120,&DAT_0068c120);
      }
    }
    param_2 = local_4c + 9;
  } while( true );
}

