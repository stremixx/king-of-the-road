
void FUN_00485780(int param_1,int param_2,int param_3,double *param_4)

{
  uint uVar1;
  uint uVar2;
  LONG LVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 *local_c [2];
  int local_4;
  
  if (param_2 == -1) {
    FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                 s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x238,s_Internal_error_437_0066f294,
                 &DAT_0068c120,&DAT_0068c120);
  }
  if (param_3 == -1) {
    FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                 s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x23c,s_Internal_error_438_0066f280,
                 &DAT_0068c120,&DAT_0068c120);
  }
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  if (param_2 != param_3) {
    if (*(char *)(*(int *)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xc4 + param_1 * 4) + param_3) !=
        -1) {
      fVar8 = (float10)FUN_00484be0(param_1,param_2,param_3);
      *param_4 = (double)fVar8;
      return;
    }
    FUN_00484d80(local_c,param_1,param_2,param_3,param_4);
    iVar7 = (local_4 - (int)local_c[0]) / 0xc;
    if (iVar7 != 0) {
      uVar2 = iVar7 * 0xc;
      if (0x80 < uVar2) {
        FUN_0061c888(local_c[0]);
        return;
      }
      LVar3 = InterlockedExchange(&DAT_0068c164,1);
      uVar1 = DAT_0066b83c;
      if (LVar3 != 0) {
        uVar5 = 0;
        if (DAT_0066b83c != 0) {
          uVar4 = DAT_0068c168 >> 1;
          do {
            if (((uVar4 <= uVar5) && (DAT_0068c164 == 0)) &&
               (LVar3 = InterlockedExchange(&DAT_0068c164,1), LVar3 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar5;
              goto LAB_00485971;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar1);
        }
        DAT_0066b83c = 0x1e;
        iVar7 = 6;
        while( true ) {
          iVar6 = iVar7;
          if (0x1b < iVar7) {
            iVar6 = 0x1b;
          }
          LVar3 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar3 == 0) break;
          if (iVar6 < 0x15) {
            Sleep(0);
            iVar7 = iVar7 + 1;
          }
          else {
            Sleep(1 << ((char)iVar6 - 0x14U & 0x1f));
            iVar7 = iVar7 + 1;
          }
        }
      }
LAB_00485971:
      *local_c[0] = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = local_c[0];
      DAT_0068c164 = 0;
    }
  }
  return;
}

