									      ;;
ACT_KEYB    DB	  'Current keyboard code: ','$'                               ;;
ACT_KEYB_CP DB	  '  code page: ','$'                                         ;;
ACT_CON_CP  DB	  'Current CON code page: ','$'                               ;;
INV_L	    DB	  'Invalid keyboard code specified',10,13,'$'                 ;;
INV_I	    DB	  'Invalid keyboard ID specified',10,13,'$'                 ;;
INV_CP	    DB	  'Invalid code page specified',10,13,'$'                     ;;
INV_S	    DB	  'Invalid syntax',10,13,'$'                                  ;;
INV_FN	    DB	  'Bad or missing Keyboard Definition File',10,13,'$'         ;;
INV_KEYB_Q  DB	  'KEYB has not been installed',10,13,'$'                     ;;
INV_CON_Q   DB	  'Active code page not available from CON device',10,13,'$'  ;;
NOT_DESIG   DB	  'Code page specified has not been prepared',10,13,'$'       ;;
NOT_SUPP    DB	  'One or more CON code pages invalid for given keyboard code',10,13,'$' ;;
NOT_VALID1  DB	  'Code page requested (','$'                                 ;;
NOT_VALID2  DB	  ') is not valid for given keyboard code',10,13,'$'               ;;
WARNING_1   DB	  'Code page specified is inconsistent with the selected code page',10,13,'$'  ;;
INV_COMBO   DB	  'ID code specified is inconsistent with the selected keyboard code',13,'$'  ;;
MEMORY_OVERF DB   'Unable to create KEYB table in resident memory',10,13,'$'  ;;
CR_LF	    DB	  10,13,'$'                                                   ;;
									      ;;
