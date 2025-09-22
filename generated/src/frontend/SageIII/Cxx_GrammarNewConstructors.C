// MACHINE GENERATED SOURCE FILE WITH ROSE (Grammar.h)--- DO NOT MODIFY!

#include "sage3basic.h"

#ifndef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT
   #include "AST_FILE_IO.h"
#endif 
// The header file ("rose_config.h") should only be included by source files that require it.
#include "rose_config.h"

#if _MSC_VER
#define USE_CPP_NEW_DELETE_OPERATORS 0
#endif

#define ROSE_ALLOC_TRACE 0
#undef mprintf
#define mprintf Rose::Diagnostics::mfprintf(Rose::ir_node_mlog[Rose::Diagnostics::DEBUG])

#include <Rose/BinaryAnalysis/RegisterDictionary.h>

using namespace std;

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgToken::SgToken ( std::string lexeme_string, unsigned int classification_code )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgToken::SgToken (std::string lexeme_string, unsigned int classification_code) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lexeme_string = lexeme_string;
     p_classification_code = classification_code;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TOKEN == this->variant());
     ASSERT_require(TOKEN == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgToken() function since it has been problematic
     ASSERT_not_null(isSgToken(this));
   }

// Generated constructor (all data members)

/* #line 50 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLocatedNodeSupport::SgLocatedNodeSupport (  )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgLocatedNodeSupport::SgLocatedNodeSupport () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LocatedNodeSupportTag == this->variant());
     ASSERT_require(LocatedNodeSupportTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLocatedNodeSupport() function since it has been problematic
     ASSERT_not_null(isSgLocatedNodeSupport(this));
   }

// Generated constructor (all data members)

/* #line 75 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCommonBlockObject::SgCommonBlockObject (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgCommonBlockObject::SgCommonBlockObject () sage_class_name() = %s \n",sage_class_name());
#endif

     p_block_name ="";
     p_variable_reference_list = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_CommonBlockObject == this->variant());
     ASSERT_require(TEMP_CommonBlockObject == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCommonBlockObject() function since it has been problematic
     ASSERT_not_null(isSgCommonBlockObject(this));
   }

// Generated constructor (all data members)

/* #line 103 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInitializedName::SgInitializedName ( SgName name, SgType* typeptr )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgInitializedName::SgInitializedName (SgName name, SgType* typeptr) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_microsoft_uuid_string ="";
     p_typeptr = typeptr;
     p_initptr = NULL;
     p_prev_decl_item = NULL;
     p_is_initializer = false;
     p_declptr = NULL;
     p_storageModifier = NULL;
     p_scope = NULL;
     p_preinitialization = e_unknown_preinitialization;
     p_isCoArray = false;
     p_register_name_code = SgInitializedName::e_invalid_register;
     p_excess_specifier = SgInitializedName::e_excess_specifier_none;
     p_register_name_string = "";
     p_requiresGlobalNameQualificationOnType = false;
     p_shapeDeferred = false;
     p_initializationDeferred = false;
     p_gnu_attribute_initialization_priority = 0;
     p_gnu_attribute_named_weak_reference ="";
     p_gnu_attribute_named_alias ="";
     p_gnu_attribute_cleanup_function ="";
     p_gnu_attribute_section_name ="";
     p_gnu_attribute_alignment = -1;
     p_gnu_attribute_visability = SgDeclarationModifier::e_unknown_visibility;
     p_protected_declaration = false;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_name_qualification_length_for_type = 0;
     p_type_elaboration_required_for_type = false;
     p_global_qualification_required_for_type = false;
     p_hasArrayTypeWithEmptyBracketSyntax = false;
     p_using_C11_Alignas_keyword = false;
     p_constant_or_type_argument_for_Alignas_keyword = NULL;
     p_using_auto_keyword = false;
     p_auto_decltype = NULL;
     p_using_device_keyword = false;
     p_is_braced_initialized = false;
     p_using_assignment_copy_constructor_syntax = false;
     p_needs_definitions = false;
     p_is_parameter_pack = false;
     p_is_pack_element = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(InitializedNameTag == this->variant());
     ASSERT_require(InitializedNameTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgInitializedName() function since it has been problematic
     ASSERT_not_null(isSgInitializedName(this));
   }

// Generated constructor (all data members)

/* #line 171 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInterfaceBody::SgInterfaceBody ( SgName function_name, SgFunctionDeclaration* functionDeclaration, bool use_function_name )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgInterfaceBody::SgInterfaceBody (SgName function_name, SgFunctionDeclaration* functionDeclaration, bool use_function_name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function_name = function_name;
     p_functionDeclaration = functionDeclaration;
     p_use_function_name = use_function_name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Interface_Body == this->variant());
     ASSERT_require(TEMP_Interface_Body == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgInterfaceBody() function since it has been problematic
     ASSERT_not_null(isSgInterfaceBody(this));
   }

// Generated constructor (all data members)

/* #line 200 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgHeaderFileBody::SgHeaderFileBody (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgHeaderFileBody::SgHeaderFileBody () sage_class_name() = %s \n",sage_class_name());
#endif

     p_include_file = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Header_File_Body == this->variant());
     ASSERT_require(TEMP_Header_File_Body == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgHeaderFileBody() function since it has been problematic
     ASSERT_not_null(isSgHeaderFileBody(this));
   }

// Generated constructor (all data members)

/* #line 227 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRenamePair::SgRenamePair ( SgName local_name, SgName use_name )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgRenamePair::SgRenamePair (SgName local_name, SgName use_name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_local_name = local_name;
     p_use_name = use_name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Rename_Pair == this->variant());
     ASSERT_require(TEMP_Rename_Pair == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRenamePair() function since it has been problematic
     ASSERT_not_null(isSgRenamePair(this));
   }

// Generated constructor (all data members)

/* #line 255 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaMemberValuePair::SgJavaMemberValuePair (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgJavaMemberValuePair::SgJavaMemberValuePair () sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = NULL;
     p_value = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JavaMemberValuePairTag == this->variant());
     ASSERT_require(JavaMemberValuePairTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaMemberValuePair() function since it has been problematic
     ASSERT_not_null(isSgJavaMemberValuePair(this));
   }

// Generated constructor (all data members)

/* #line 283 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpClause::SgOmpClause (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgOmpClause::SgOmpClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpClauseTag == this->variant());
     ASSERT_require(OmpClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpClause() function since it has been problematic
     ASSERT_not_null(isSgOmpClause(this));
   }

// Generated constructor (all data members)

/* #line 308 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpNowaitClause::SgOmpNowaitClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpNowaitClause::SgOmpNowaitClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpNowaitClauseTag == this->variant());
     ASSERT_require(OmpNowaitClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpNowaitClause() function since it has been problematic
     ASSERT_not_null(isSgOmpNowaitClause(this));
   }

// Generated constructor (all data members)

/* #line 333 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpBeginClause::SgOmpBeginClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpBeginClause::SgOmpBeginClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpBeginClauseTag == this->variant());
     ASSERT_require(OmpBeginClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpBeginClause() function since it has been problematic
     ASSERT_not_null(isSgOmpBeginClause(this));
   }

// Generated constructor (all data members)

/* #line 358 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpEndClause::SgOmpEndClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpEndClause::SgOmpEndClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpEndClauseTag == this->variant());
     ASSERT_require(OmpEndClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpEndClause() function since it has been problematic
     ASSERT_not_null(isSgOmpEndClause(this));
   }

// Generated constructor (all data members)

/* #line 383 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpUntiedClause::SgOmpUntiedClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpUntiedClause::SgOmpUntiedClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpUntiedClauseTag == this->variant());
     ASSERT_require(OmpUntiedClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpUntiedClause() function since it has been problematic
     ASSERT_not_null(isSgOmpUntiedClause(this));
   }

// Generated constructor (all data members)

/* #line 408 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDefaultClause::SgOmpDefaultClause ( SgOmpClause::omp_default_option_enum data_sharing )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpDefaultClause::SgOmpDefaultClause (SgOmpClause::omp_default_option_enum data_sharing) sage_class_name() = %s \n",sage_class_name());
#endif

     p_data_sharing = data_sharing;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpDefaultClauseTag == this->variant());
     ASSERT_require(OmpDefaultClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpDefaultClause() function since it has been problematic
     ASSERT_not_null(isSgOmpDefaultClause(this));
   }

// Generated constructor (all data members)

/* #line 435 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpAtomicClause::SgOmpAtomicClause ( SgOmpClause::omp_atomic_clause_enum atomicity )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpAtomicClause::SgOmpAtomicClause (SgOmpClause::omp_atomic_clause_enum atomicity) sage_class_name() = %s \n",sage_class_name());
#endif

     p_atomicity = atomicity;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpAtomicClauseTag == this->variant());
     ASSERT_require(OmpAtomicClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpAtomicClause() function since it has been problematic
     ASSERT_not_null(isSgOmpAtomicClause(this));
   }

// Generated constructor (all data members)

/* #line 462 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpProcBindClause::SgOmpProcBindClause ( SgOmpClause::omp_proc_bind_policy_enum policy )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpProcBindClause::SgOmpProcBindClause (SgOmpClause::omp_proc_bind_policy_enum policy) sage_class_name() = %s \n",sage_class_name());
#endif

     p_policy = policy;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpProcBindClauseTag == this->variant());
     ASSERT_require(OmpProcBindClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpProcBindClause() function since it has been problematic
     ASSERT_not_null(isSgOmpProcBindClause(this));
   }

// Generated constructor (all data members)

/* #line 489 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpExpressionClause::SgOmpExpressionClause ( SgExpression* expression )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpExpressionClause::SgOmpExpressionClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpExpressionClauseTag == this->variant());
     ASSERT_require(OmpExpressionClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpExpressionClause() function since it has been problematic
     ASSERT_not_null(isSgOmpExpressionClause(this));
   }

// Generated constructor (all data members)

/* #line 516 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpOrderedClause::SgOmpOrderedClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpOrderedClause::SgOmpOrderedClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpOrderedClauseTag == this->variant());
     ASSERT_require(OmpOrderedClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpOrderedClause() function since it has been problematic
     ASSERT_not_null(isSgOmpOrderedClause(this));
   }

// Generated constructor (all data members)

/* #line 541 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCollapseClause::SgOmpCollapseClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpCollapseClause::SgOmpCollapseClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpCollapseClauseTag == this->variant());
     ASSERT_require(OmpCollapseClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpCollapseClause() function since it has been problematic
     ASSERT_not_null(isSgOmpCollapseClause(this));
   }

// Generated constructor (all data members)

/* #line 566 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpIfClause::SgOmpIfClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpIfClause::SgOmpIfClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpIfClauseTag == this->variant());
     ASSERT_require(OmpIfClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpIfClause() function since it has been problematic
     ASSERT_not_null(isSgOmpIfClause(this));
   }

// Generated constructor (all data members)

/* #line 591 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpNumThreadsClause::SgOmpNumThreadsClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpNumThreadsClause::SgOmpNumThreadsClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpNumThreadsClauseTag == this->variant());
     ASSERT_require(OmpNumThreadsClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpNumThreadsClause() function since it has been problematic
     ASSERT_not_null(isSgOmpNumThreadsClause(this));
   }

// Generated constructor (all data members)

/* #line 616 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDeviceClause::SgOmpDeviceClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpDeviceClause::SgOmpDeviceClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpIfDeviceTag == this->variant());
     ASSERT_require(OmpIfDeviceTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpDeviceClause() function since it has been problematic
     ASSERT_not_null(isSgOmpDeviceClause(this));
   }

// Generated constructor (all data members)

/* #line 641 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSafelenClause::SgOmpSafelenClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpSafelenClause::SgOmpSafelenClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpSafelenTag == this->variant());
     ASSERT_require(OmpSafelenTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSafelenClause() function since it has been problematic
     ASSERT_not_null(isSgOmpSafelenClause(this));
   }

// Generated constructor (all data members)

/* #line 666 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSimdlenClause::SgOmpSimdlenClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpSimdlenClause::SgOmpSimdlenClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpSimdlenTag == this->variant());
     ASSERT_require(OmpSimdlenTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSimdlenClause() function since it has been problematic
     ASSERT_not_null(isSgOmpSimdlenClause(this));
   }

// Generated constructor (all data members)

/* #line 691 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpFinalClause::SgOmpFinalClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpFinalClause::SgOmpFinalClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpFinalClauseTag == this->variant());
     ASSERT_require(OmpFinalClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpFinalClause() function since it has been problematic
     ASSERT_not_null(isSgOmpFinalClause(this));
   }

// Generated constructor (all data members)

/* #line 716 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpPriorityClause::SgOmpPriorityClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpPriorityClause::SgOmpPriorityClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpPriorityClauseTag == this->variant());
     ASSERT_require(OmpPriorityClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpPriorityClause() function since it has been problematic
     ASSERT_not_null(isSgOmpPriorityClause(this));
   }

// Generated constructor (all data members)

/* #line 741 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpInbranchClause::SgOmpInbranchClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpInbranchClause::SgOmpInbranchClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpInbranchClauseTag == this->variant());
     ASSERT_require(OmpInbranchClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpInbranchClause() function since it has been problematic
     ASSERT_not_null(isSgOmpInbranchClause(this));
   }

// Generated constructor (all data members)

/* #line 766 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpNotinbranchClause::SgOmpNotinbranchClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpNotinbranchClause::SgOmpNotinbranchClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpNotinbranchClauseTag == this->variant());
     ASSERT_require(OmpNotinbranchClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpNotinbranchClause() function since it has been problematic
     ASSERT_not_null(isSgOmpNotinbranchClause(this));
   }

// Generated constructor (all data members)

/* #line 791 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpVariablesClause::SgOmpVariablesClause ( SgExprListExp* variables )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpVariablesClause::SgOmpVariablesClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif

     p_variables = variables;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpVariablesClauseTag == this->variant());
     ASSERT_require(OmpVariablesClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpVariablesClause() function since it has been problematic
     ASSERT_not_null(isSgOmpVariablesClause(this));
   }

// Generated constructor (all data members)

/* #line 818 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCopyprivateClause::SgOmpCopyprivateClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpCopyprivateClause::SgOmpCopyprivateClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpCopyprivateClauseTag == this->variant());
     ASSERT_require(OmpCopyprivateClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpCopyprivateClause() function since it has been problematic
     ASSERT_not_null(isSgOmpCopyprivateClause(this));
   }

// Generated constructor (all data members)

/* #line 843 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpPrivateClause::SgOmpPrivateClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpPrivateClause::SgOmpPrivateClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpPrivateClauseTag == this->variant());
     ASSERT_require(OmpPrivateClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpPrivateClause() function since it has been problematic
     ASSERT_not_null(isSgOmpPrivateClause(this));
   }

// Generated constructor (all data members)

/* #line 868 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpFirstprivateClause::SgOmpFirstprivateClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpFirstprivateClause::SgOmpFirstprivateClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpFirstprivateClauseTag == this->variant());
     ASSERT_require(OmpFirstprivateClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpFirstprivateClause() function since it has been problematic
     ASSERT_not_null(isSgOmpFirstprivateClause(this));
   }

// Generated constructor (all data members)

/* #line 893 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSharedClause::SgOmpSharedClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpSharedClause::SgOmpSharedClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpSharedClauseTag == this->variant());
     ASSERT_require(OmpSharedClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSharedClause() function since it has been problematic
     ASSERT_not_null(isSgOmpSharedClause(this));
   }

// Generated constructor (all data members)

/* #line 918 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCopyinClause::SgOmpCopyinClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpCopyinClause::SgOmpCopyinClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpCopyinClauseTag == this->variant());
     ASSERT_require(OmpCopyinClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpCopyinClause() function since it has been problematic
     ASSERT_not_null(isSgOmpCopyinClause(this));
   }

// Generated constructor (all data members)

/* #line 943 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpLastprivateClause::SgOmpLastprivateClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpLastprivateClause::SgOmpLastprivateClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpLastprivateClauseTag == this->variant());
     ASSERT_require(OmpLastprivateClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpLastprivateClause() function since it has been problematic
     ASSERT_not_null(isSgOmpLastprivateClause(this));
   }

// Generated constructor (all data members)

/* #line 968 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpReductionClause::SgOmpReductionClause ( SgExprListExp* variables, SgOmpClause::omp_reduction_operator_enum operation )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpReductionClause::SgOmpReductionClause (SgExprListExp* variables, SgOmpClause::omp_reduction_operator_enum operation) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operation = operation;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpReductionClauseTag == this->variant());
     ASSERT_require(OmpReductionClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpReductionClause() function since it has been problematic
     ASSERT_not_null(isSgOmpReductionClause(this));
   }

// Generated constructor (all data members)

/* #line 995 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpMapClause::SgOmpMapClause ( SgExprListExp* variables, SgOmpClause::omp_map_operator_enum operation )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpMapClause::SgOmpMapClause (SgExprListExp* variables, SgOmpClause::omp_map_operator_enum operation) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operation = operation;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpMapClauseTag == this->variant());
     ASSERT_require(OmpMapClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpMapClause() function since it has been problematic
     ASSERT_not_null(isSgOmpMapClause(this));
   }

// Generated constructor (all data members)

/* #line 1022 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpUniformClause::SgOmpUniformClause ( SgExprListExp* variables )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpUniformClause::SgOmpUniformClause (SgExprListExp* variables) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpUniformClauseTag == this->variant());
     ASSERT_require(OmpUniformClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpUniformClause() function since it has been problematic
     ASSERT_not_null(isSgOmpUniformClause(this));
   }

// Generated constructor (all data members)

/* #line 1047 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpAlignedClause::SgOmpAlignedClause ( SgExprListExp* variables, SgExpression* alignment )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpAlignedClause::SgOmpAlignedClause (SgExprListExp* variables, SgExpression* alignment) sage_class_name() = %s \n",sage_class_name());
#endif

     p_alignment = alignment;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpAlignedClauseTag == this->variant());
     ASSERT_require(OmpAlignedClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpAlignedClause() function since it has been problematic
     ASSERT_not_null(isSgOmpAlignedClause(this));
   }

// Generated constructor (all data members)

/* #line 1074 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpLinearClause::SgOmpLinearClause ( SgExprListExp* variables, SgExpression* step )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpLinearClause::SgOmpLinearClause (SgExprListExp* variables, SgExpression* step) sage_class_name() = %s \n",sage_class_name());
#endif

     p_step = step;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpLinearClauseTag == this->variant());
     ASSERT_require(OmpLinearClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpLinearClause() function since it has been problematic
     ASSERT_not_null(isSgOmpLinearClause(this));
   }

// Generated constructor (all data members)

/* #line 1101 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDependClause::SgOmpDependClause ( SgExprListExp* variables, SgOmpClause::omp_dependence_type_enum dependence_type )
   : SgOmpVariablesClause(variables)
   {
#ifdef DEBUG
  // printf ("In SgOmpDependClause::SgOmpDependClause (SgExprListExp* variables, SgOmpClause::omp_dependence_type_enum dependence_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_dependence_type = dependence_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpDependClauseTag == this->variant());
     ASSERT_require(OmpDependClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpDependClause() function since it has been problematic
     ASSERT_not_null(isSgOmpDependClause(this));
   }

// Generated constructor (all data members)

/* #line 1128 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpScheduleClause::SgOmpScheduleClause ( SgOmpClause::omp_schedule_kind_enum kind, SgExpression* chunk_size )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpScheduleClause::SgOmpScheduleClause (SgOmpClause::omp_schedule_kind_enum kind, SgExpression* chunk_size) sage_class_name() = %s \n",sage_class_name());
#endif

     p_kind = kind;
     p_chunk_size = chunk_size;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OmpScheduleClauseTag == this->variant());
     ASSERT_require(OmpScheduleClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpScheduleClause() function since it has been problematic
     ASSERT_not_null(isSgOmpScheduleClause(this));
   }

// Generated constructor (all data members)

/* #line 1156 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpMergeableClause::SgOmpMergeableClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpMergeableClause::SgOmpMergeableClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OmpMergeableClauseTag == this->variant());
     ASSERT_require(OmpMergeableClauseTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpMergeableClause() function since it has been problematic
     ASSERT_not_null(isSgOmpMergeableClause(this));
   }

// Generated constructor (all data members)

/* #line 1181 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLambdaCapture::SgLambdaCapture ( SgExpression* capture_variable, SgExpression* source_closure_variable, SgExpression* closure_variable, bool capture_by_reference, bool implicit, bool pack_expansion )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgLambdaCapture::SgLambdaCapture (SgExpression* capture_variable, SgExpression* source_closure_variable, SgExpression* closure_variable, bool capture_by_reference, bool implicit, bool pack_expansion) sage_class_name() = %s \n",sage_class_name());
#endif

     p_capture_variable = capture_variable;
     p_source_closure_variable = source_closure_variable;
     p_closure_variable = closure_variable;
     p_capture_by_reference = capture_by_reference;
     p_implicit = implicit;
     p_pack_expansion = pack_expansion;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LambdaCaptureTag == this->variant());
     ASSERT_require(LambdaCaptureTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLambdaCapture() function since it has been problematic
     ASSERT_not_null(isSgLambdaCapture(this));
   }

// Generated constructor (all data members)

/* #line 1213 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLambdaCaptureList::SgLambdaCaptureList (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgLambdaCaptureList::SgLambdaCaptureList () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LambdaCaptureListTag == this->variant());
     ASSERT_require(LambdaCaptureListTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLambdaCaptureList() function since it has been problematic
     ASSERT_not_null(isSgLambdaCaptureList(this));
   }

// Generated constructor (all data members)

/* #line 1238 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTypeConstraint::SgAdaTypeConstraint (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgAdaTypeConstraint::SgAdaTypeConstraint () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AdaTypeConstraintTag == this->variant());
     ASSERT_require(AdaTypeConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTypeConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaTypeConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1263 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaRangeConstraint::SgAdaRangeConstraint ( SgExpression* range )
   : SgAdaTypeConstraint()
   {
#ifdef DEBUG
  // printf ("In SgAdaRangeConstraint::SgAdaRangeConstraint (SgExpression* range) sage_class_name() = %s \n",sage_class_name());
#endif

     p_range = range;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(AdaRangeConstraintTag == this->variant());
     ASSERT_require(AdaRangeConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaRangeConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaRangeConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1290 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaIndexConstraint::SgAdaIndexConstraint (  )
   : SgAdaTypeConstraint()
   {
#ifdef DEBUG
  // printf ("In SgAdaIndexConstraint::SgAdaIndexConstraint () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AdaIndexConstraintTag == this->variant());
     ASSERT_require(AdaIndexConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaIndexConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaIndexConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1315 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaDigitsConstraint::SgAdaDigitsConstraint ( SgExpression* digits, SgAdaTypeConstraint* subConstraint )
   : SgAdaTypeConstraint()
   {
#ifdef DEBUG
  // printf ("In SgAdaDigitsConstraint::SgAdaDigitsConstraint (SgExpression* digits, SgAdaTypeConstraint* subConstraint) sage_class_name() = %s \n",sage_class_name());
#endif

     p_digits = digits;
     p_subConstraint = subConstraint;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(AdaDigitsConstraintTag == this->variant());
     ASSERT_require(AdaDigitsConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaDigitsConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaDigitsConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1343 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaDeltaConstraint::SgAdaDeltaConstraint ( SgExpression* delta, SgAdaTypeConstraint* subConstraint, bool isDecimal )
   : SgAdaTypeConstraint()
   {
#ifdef DEBUG
  // printf ("In SgAdaDeltaConstraint::SgAdaDeltaConstraint (SgExpression* delta, SgAdaTypeConstraint* subConstraint, bool isDecimal) sage_class_name() = %s \n",sage_class_name());
#endif

     p_delta = delta;
     p_subConstraint = subConstraint;
     p_isDecimal = isDecimal;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(AdaDeltaConstraintTag == this->variant());
     ASSERT_require(AdaDeltaConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaDeltaConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaDeltaConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1372 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaDiscriminantConstraint::SgAdaDiscriminantConstraint (  )
   : SgAdaTypeConstraint()
   {
#ifdef DEBUG
  // printf ("In SgAdaDiscriminantConstraint::SgAdaDiscriminantConstraint () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AdaDiscriminantConstraintTag == this->variant());
     ASSERT_require(AdaDiscriminantConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaDiscriminantConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaDiscriminantConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1397 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaNullConstraint::SgAdaNullConstraint (  )
   : SgAdaTypeConstraint()
   {
#ifdef DEBUG
  // printf ("In SgAdaNullConstraint::SgAdaNullConstraint () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AdaNullConstraintTag == this->variant());
     ASSERT_require(AdaNullConstraintTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaNullConstraint() function since it has been problematic
     ASSERT_not_null(isSgAdaNullConstraint(this));
   }

// Generated constructor (all data members)

/* #line 1422 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStatement::SgStatement (  )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgStatement::SgStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_numeric_label = NULL;
     p_source_sequence_value = -1;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(StatementTag == this->variant());
     ASSERT_require(StatementTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStatement() function since it has been problematic
     ASSERT_not_null(isSgStatement(this));
   }

// Generated constructor (all data members)

/* #line 1450 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGlobal::SgGlobal (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgGlobal::SgGlobal () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(GLOBAL_STMT == this->variant());
     ASSERT_require(GLOBAL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgGlobal() function since it has been problematic
     ASSERT_not_null(isSgGlobal(this));
   }

// Generated constructor (all data members)

/* #line 1475 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfStmt::SgIfStmt ( SgStatement* conditional, SgStatement* true_body, SgStatement* false_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfStmt::SgIfStmt (SgStatement* conditional, SgStatement* true_body, SgStatement* false_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_conditional = conditional;
     p_true_body = true_body;
     p_false_body = false_body;
     p_is_if_constexpr_statement = false;
     p_if_constexpr_value_known = false;
     p_if_constexpr_value = false;
     p_else_numeric_label = NULL;
     p_string_label = "";
     p_end_numeric_label = NULL;
     p_has_end_statement = false;
     p_use_then_keyword = false;
     p_is_else_if_statement = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(IF_STMT == this->variant());
     ASSERT_require(IF_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIfStmt() function since it has been problematic
     ASSERT_not_null(isSgIfStmt(this));
   }

// Generated constructor (all data members)

/* #line 1513 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgForStatement::SgForStatement ( SgStatement* test, SgExpression* increment, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgForStatement::SgForStatement (SgStatement* test, SgExpression* increment, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_for_init_stmt = NULL;
     p_test = test;
     p_increment = increment;
     p_loop_body = loop_body;
     p_else_body = NULL;
     p_string_label = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FOR_STMT == this->variant());
     ASSERT_require(FOR_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgForStatement() function since it has been problematic
     ASSERT_not_null(isSgForStatement(this));
   }

// Generated constructor (all data members)

/* #line 1545 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionDefinition::SgFunctionDefinition ( SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionDefinition::SgFunctionDefinition (SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FUNC_DEFN_STMT == this->variant());
     ASSERT_require(FUNC_DEFN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionDefinition() function since it has been problematic
     ASSERT_not_null(isSgFunctionDefinition(this));
   }

// Generated constructor (all data members)

/* #line 1572 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateFunctionDefinition::SgTemplateFunctionDefinition ( SgBasicBlock* body )
   : SgFunctionDefinition(body)
   {
#ifdef DEBUG
  // printf ("In SgTemplateFunctionDefinition::SgTemplateFunctionDefinition (SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMPLATE_FUNCTION_DEF_STMT == this->variant());
     ASSERT_require(TEMPLATE_FUNCTION_DEF_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateFunctionDefinition() function since it has been problematic
     ASSERT_not_null(isSgTemplateFunctionDefinition(this));
   }

// Generated constructor (all data members)

/* #line 1597 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassDefinition::SgClassDefinition (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgClassDefinition::SgClassDefinition () sage_class_name() = %s \n",sage_class_name());
#endif

     p_packingAlignment = 0;
     p_isSequence = false;
     p_isPrivate = false;
     p_isAbstract = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CLASS_DEFN_STMT == this->variant());
     ASSERT_require(CLASS_DEFN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClassDefinition() function since it has been problematic
     ASSERT_not_null(isSgClassDefinition(this));
   }

// Generated constructor (all data members)

/* #line 1627 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationDefn::SgTemplateInstantiationDefn (  )
   : SgClassDefinition()
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationDefn::SgTemplateInstantiationDefn () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMPLATE_INST_DEFN_STMT == this->variant());
     ASSERT_require(TEMPLATE_INST_DEFN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateInstantiationDefn() function since it has been problematic
     ASSERT_not_null(isSgTemplateInstantiationDefn(this));
   }

// Generated constructor (all data members)

/* #line 1652 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateClassDefinition::SgTemplateClassDefinition (  )
   : SgClassDefinition()
   {
#ifdef DEBUG
  // printf ("In SgTemplateClassDefinition::SgTemplateClassDefinition () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMPLATE_CLASS_DEF_STMT == this->variant());
     ASSERT_require(TEMPLATE_CLASS_DEF_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateClassDefinition() function since it has been problematic
     ASSERT_not_null(isSgTemplateClassDefinition(this));
   }

// Generated constructor (all data members)

/* #line 1677 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWhileStmt::SgWhileStmt ( SgStatement* condition, SgStatement* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgWhileStmt::SgWhileStmt (SgStatement* condition, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_else_body = NULL;
     p_end_numeric_label = NULL;
     p_string_label = "";
     p_has_end_statement = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(WHILE_STMT == this->variant());
     ASSERT_require(WHILE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWhileStmt() function since it has been problematic
     ASSERT_not_null(isSgWhileStmt(this));
   }

// Generated constructor (all data members)

/* #line 1709 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDoWhileStmt::SgDoWhileStmt ( SgStatement* body, SgStatement* condition )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgDoWhileStmt::SgDoWhileStmt (SgStatement* body, SgStatement* condition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;
     p_condition = condition;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DO_WHILE_STMT == this->variant());
     ASSERT_require(DO_WHILE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDoWhileStmt() function since it has been problematic
     ASSERT_not_null(isSgDoWhileStmt(this));
   }

// Generated constructor (all data members)

/* #line 1737 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSwitchStatement::SgSwitchStatement ( SgStatement* item_selector, SgStatement* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgSwitchStatement::SgSwitchStatement (SgStatement* item_selector, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_item_selector = item_selector;
     p_body = body;
     p_end_numeric_label = NULL;
     p_string_label = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SWITCH_STMT == this->variant());
     ASSERT_require(SWITCH_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSwitchStatement() function since it has been problematic
     ASSERT_not_null(isSgSwitchStatement(this));
   }

// Generated constructor (all data members)

/* #line 1767 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCatchOptionStmt::SgCatchOptionStmt ( SgVariableDeclaration* condition, SgStatement* body, SgTryStmt* trystmt )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgCatchOptionStmt::SgCatchOptionStmt (SgVariableDeclaration* condition, SgStatement* body, SgTryStmt* trystmt) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_trystmt = trystmt;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CATCH_STMT == this->variant());
     ASSERT_require(CATCH_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCatchOptionStmt() function since it has been problematic
     ASSERT_not_null(isSgCatchOptionStmt(this));
   }

// Generated constructor (all data members)

/* #line 1796 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamespaceDefinitionStatement::SgNamespaceDefinitionStatement ( SgNamespaceDeclarationStatement* namespaceDeclaration )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamespaceDefinitionStatement::SgNamespaceDefinitionStatement (SgNamespaceDeclarationStatement* namespaceDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_namespaceDeclaration = namespaceDeclaration;
     p_previousNamespaceDefinition = NULL;
     p_nextNamespaceDefinition = NULL;
     p_global_definition = NULL;
     p_isUnionOfReentrantNamespaceDefinitions = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NAMESPACE_DEFINITION_STMT == this->variant());
     ASSERT_require(NAMESPACE_DEFINITION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNamespaceDefinitionStatement() function since it has been problematic
     ASSERT_not_null(isSgNamespaceDefinitionStatement(this));
   }

// Generated constructor (all data members)

/* #line 1827 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBlockDataStatement::SgBlockDataStatement (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgBlockDataStatement::SgBlockDataStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Block_Data_Statement == this->variant());
     ASSERT_require(TEMP_Block_Data_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBlockDataStatement() function since it has been problematic
     ASSERT_not_null(isSgBlockDataStatement(this));
   }

// Generated constructor (all data members)

/* #line 1854 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssociateStatement::SgAssociateStatement (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssociateStatement::SgAssociateStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Associate_Statement == this->variant());
     ASSERT_require(TEMP_Associate_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAssociateStatement() function since it has been problematic
     ASSERT_not_null(isSgAssociateStatement(this));
   }

// Generated constructor (all data members)

/* #line 1881 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranDo::SgFortranDo ( SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgFortranDo::SgFortranDo (SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initialization = initialization;
     p_bound = bound;
     p_increment = increment;
     p_body = body;
     p_end_numeric_label = NULL;
     p_string_label = "";
     p_old_style = false;
     p_has_end_statement = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FORTRAN_DO == this->variant());
     ASSERT_require(FORTRAN_DO == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFortranDo() function since it has been problematic
     ASSERT_not_null(isSgFortranDo(this));
   }

// Generated constructor (all data members)

/* #line 1915 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranNonblockedDo::SgFortranNonblockedDo ( SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body, SgStatement* end_statement )
   : SgFortranDo(initialization, bound, increment, body)
   {
#ifdef DEBUG
  // printf ("In SgFortranNonblockedDo::SgFortranNonblockedDo (SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body, SgStatement* end_statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_end_statement = end_statement;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FORTRAN_NONBLOCKED_DO == this->variant());
     ASSERT_require(FORTRAN_NONBLOCKED_DO == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFortranNonblockedDo() function since it has been problematic
     ASSERT_not_null(isSgFortranNonblockedDo(this));
   }

// Generated constructor (all data members)

/* #line 1942 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgForAllStatement::SgForAllStatement ( SgExprListExp* forall_header, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgForAllStatement::SgForAllStatement (SgExprListExp* forall_header, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_forall_header = forall_header;
     p_body = body;
     p_has_end_statement = false;
     p_string_label = "";
     p_end_numeric_label = NULL;
     p_forall_statement_kind = SgForAllStatement::e_forall_statement;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FOR_ALL_STMT == this->variant());
     ASSERT_require(FOR_ALL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgForAllStatement() function since it has been problematic
     ASSERT_not_null(isSgForAllStatement(this));
   }

// Generated constructor (all data members)

/* #line 1974 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcForAllStatement::SgUpcForAllStatement ( SgStatement* test, SgExpression* increment, SgExpression* affinity, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcForAllStatement::SgUpcForAllStatement (SgStatement* test, SgExpression* increment, SgExpression* affinity, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_for_init_stmt = NULL;
     p_test = test;
     p_increment = increment;
     p_affinity = affinity;
     p_loop_body = loop_body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_FORALL_STMT == this->variant());
     ASSERT_require(UPC_FORALL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcForAllStatement() function since it has been problematic
     ASSERT_not_null(isSgUpcForAllStatement(this));
   }

// Generated constructor (all data members)

/* #line 2005 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCAFWithTeamStatement::SgCAFWithTeamStatement ( SgVarRefExp* teamId, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgCAFWithTeamStatement::SgCAFWithTeamStatement (SgVarRefExp* teamId, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_teamId = teamId;
     p_body = body;
     p_endHasTeamId = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(WITHTEAM_STMT == this->variant());
     ASSERT_require(WITHTEAM_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCAFWithTeamStatement() function since it has been problematic
     ASSERT_not_null(isSgCAFWithTeamStatement(this));
   }

// Generated constructor (all data members)

/* #line 2034 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaForEachStatement::SgJavaForEachStatement ( SgVariableDeclaration* element, SgExpression* collection, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaForEachStatement::SgJavaForEachStatement (SgVariableDeclaration* element, SgExpression* collection, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_collection = collection;
     p_loop_body = loop_body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_FOREACH_STMT == this->variant());
     ASSERT_require(JAVA_FOREACH_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaForEachStatement() function since it has been problematic
     ASSERT_not_null(isSgJavaForEachStatement(this));
   }

// Generated constructor (all data members)

/* #line 2063 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaLabelStatement::SgJavaLabelStatement ( SgName label, SgStatement* statement )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaLabelStatement::SgJavaLabelStatement (SgName label, SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_statement = statement;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_LABEL_STMT == this->variant());
     ASSERT_require(JAVA_LABEL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaLabelStatement() function since it has been problematic
     ASSERT_not_null(isSgJavaLabelStatement(this));
   }

// Generated constructor (all data members)

/* #line 2091 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMatlabForStatement::SgMatlabForStatement ( SgExpression* index, SgExpression* range, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgMatlabForStatement::SgMatlabForStatement (SgExpression* index, SgExpression* range, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_index = index;
     p_range = range;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(MATLAB_FOR_STATEMENT == this->variant());
     ASSERT_require(MATLAB_FOR_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMatlabForStatement() function since it has been problematic
     ASSERT_not_null(isSgMatlabForStatement(this));
   }

// Generated constructor (all data members)

/* #line 2120 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionParameterScope::SgFunctionParameterScope (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionParameterScope::SgFunctionParameterScope () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(FUNCTION_PARAMETER_SCOPE == this->variant());
     ASSERT_require(FUNCTION_PARAMETER_SCOPE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionParameterScope() function since it has been problematic
     ASSERT_not_null(isSgFunctionParameterScope(this));
   }

// Generated constructor (all data members)

/* #line 2145 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeclarationScope::SgDeclarationScope (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeclarationScope::SgDeclarationScope () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DECLARATION_SCOPE == this->variant());
     ASSERT_require(DECLARATION_SCOPE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDeclarationScope() function since it has been problematic
     ASSERT_not_null(isSgDeclarationScope(this));
   }

// Generated constructor (all data members)

/* #line 2170 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRangeBasedForStatement::SgRangeBasedForStatement ( SgVariableDeclaration* iterator_declaration, SgVariableDeclaration* range_declaration, SgVariableDeclaration* begin_declaration, SgVariableDeclaration* end_declaration, SgExpression* not_equal_expression, SgExpression* increment_expression, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgRangeBasedForStatement::SgRangeBasedForStatement (SgVariableDeclaration* iterator_declaration, SgVariableDeclaration* range_declaration, SgVariableDeclaration* begin_declaration, SgVariableDeclaration* end_declaration, SgExpression* not_equal_expression, SgExpression* increment_expression, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_iterator_declaration = iterator_declaration;
     p_range_declaration = range_declaration;
     p_begin_declaration = begin_declaration;
     p_end_declaration = end_declaration;
     p_not_equal_expression = not_equal_expression;
     p_increment_expression = increment_expression;
     p_loop_body = loop_body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(RANGE_BASED_FOR_STMT == this->variant());
     ASSERT_require(RANGE_BASED_FOR_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRangeBasedForStatement() function since it has been problematic
     ASSERT_not_null(isSgRangeBasedForStatement(this));
   }

// Generated constructor (all data members)

/* #line 2203 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialForThenStatement::SgJovialForThenStatement ( SgExpression* initialization, SgExpression* while_expression, SgExpression* by_or_then_expression, SgBasicBlock* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgJovialForThenStatement::SgJovialForThenStatement (SgExpression* initialization, SgExpression* while_expression, SgExpression* by_or_then_expression, SgBasicBlock* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initialization = initialization;
     p_while_expression = while_expression;
     p_by_or_then_expression = by_or_then_expression;
     p_loop_body = loop_body;
     p_loop_statement_type = SgJovialForThenStatement::e_unknown;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_FOR_THEN_STATEMENT == this->variant());
     ASSERT_require(JOVIAL_FOR_THEN_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialForThenStatement() function since it has been problematic
     ASSERT_not_null(isSgJovialForThenStatement(this));
   }

// Generated constructor (all data members)

/* #line 2234 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaAcceptStmt::SgAdaAcceptStmt (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaAcceptStmt::SgAdaAcceptStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_parameterScope = NULL;
     p_parameterList = NULL;
     p_entry = NULL;
     p_index = NULL;
     p_body = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_ACCEPT_STMT == this->variant());
     ASSERT_require(ADA_ACCEPT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaAcceptStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaAcceptStmt(this));
   }

// Generated constructor (all data members)

/* #line 2265 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaPackageSpec::SgAdaPackageSpec (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaPackageSpec::SgAdaPackageSpec () sage_class_name() = %s \n",sage_class_name());
#endif

     p_hasPrivate = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PACKAGE_SPEC == this->variant());
     ASSERT_require(ADA_PACKAGE_SPEC == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaPackageSpec() function since it has been problematic
     ASSERT_not_null(isSgAdaPackageSpec(this));
   }

// Generated constructor (all data members)

/* #line 2292 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaPackageBody::SgAdaPackageBody (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaPackageBody::SgAdaPackageBody () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ADA_PACKAGE_BODY == this->variant());
     ASSERT_require(ADA_PACKAGE_BODY == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaPackageBody() function since it has been problematic
     ASSERT_not_null(isSgAdaPackageBody(this));
   }

// Generated constructor (all data members)

/* #line 2317 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTaskSpec::SgAdaTaskSpec (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaTaskSpec::SgAdaTaskSpec () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;
     p_hasPrivate = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_TASK_SPEC == this->variant());
     ASSERT_require(ADA_TASK_SPEC == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTaskSpec() function since it has been problematic
     ASSERT_not_null(isSgAdaTaskSpec(this));
   }

// Generated constructor (all data members)

/* #line 2345 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTaskBody::SgAdaTaskBody (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaTaskBody::SgAdaTaskBody () sage_class_name() = %s \n",sage_class_name());
#endif

     p_spec = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_TASK_BODY == this->variant());
     ASSERT_require(ADA_TASK_BODY == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTaskBody() function since it has been problematic
     ASSERT_not_null(isSgAdaTaskBody(this));
   }

// Generated constructor (all data members)

/* #line 2372 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaProtectedBody::SgAdaProtectedBody (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaProtectedBody::SgAdaProtectedBody () sage_class_name() = %s \n",sage_class_name());
#endif

     p_spec = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PROTECTED_BODY == this->variant());
     ASSERT_require(ADA_PROTECTED_BODY == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaProtectedBody() function since it has been problematic
     ASSERT_not_null(isSgAdaProtectedBody(this));
   }

// Generated constructor (all data members)

/* #line 2399 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaProtectedSpec::SgAdaProtectedSpec (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaProtectedSpec::SgAdaProtectedSpec () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;
     p_hasPrivate = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PROTECTED_SPEC == this->variant());
     ASSERT_require(ADA_PROTECTED_SPEC == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaProtectedSpec() function since it has been problematic
     ASSERT_not_null(isSgAdaProtectedSpec(this));
   }

// Generated constructor (all data members)

/* #line 2427 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaGenericDefn::SgAdaGenericDefn (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaGenericDefn::SgAdaGenericDefn () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ADA_GENERIC_DEFN == this->variant());
     ASSERT_require(ADA_GENERIC_DEFN == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaGenericDefn() function since it has been problematic
     ASSERT_not_null(isSgAdaGenericDefn(this));
   }

// Generated constructor (all data members)

/* #line 2452 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeclarationStatement::SgDeclarationStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeclarationStatement::SgDeclarationStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_decl_attributes = 0;
     p_linkage = "";
     p_nameOnly = false;
     p_forward = false;
     p_externBrace = false;
     p_skipElaborateType = false;
     p_definingDeclaration = NULL;
     p_firstNondefiningDeclaration = NULL;
     p_binding_label ="";
     p_declarationScope = NULL;
     p_unparse_template_ast = false;
     p_adaAspects = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DECL_STMT == this->variant());
     ASSERT_require(DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDeclarationStatement() function since it has been problematic
     ASSERT_not_null(isSgDeclarationStatement(this));
   }

// Generated constructor (all data members)

/* #line 2490 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionParameterList::SgFunctionParameterList (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionParameterList::SgFunctionParameterList () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(FUNCTION_PARAMETER_LIST == this->variant());
     ASSERT_require(FUNCTION_PARAMETER_LIST == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionParameterList() function since it has been problematic
     ASSERT_not_null(isSgFunctionParameterList(this));
   }

// Generated constructor (all data members)

/* #line 2515 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariableDeclaration::SgVariableDeclaration (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgVariableDeclaration::SgVariableDeclaration () sage_class_name() = %s \n",sage_class_name());
#endif

     p_baseTypeDefiningDeclaration = NULL;
     p_variableDeclarationContainsBaseTypeDefiningDeclaration = false;
     p_specialization = SgDeclarationStatement::e_no_specialization;
     p_requiresGlobalNameQualificationOnType = false;
     p_gnu_extension_section = "";
     p_gnu_extension_alias = "";
     p_gnu_extension_initialization_priority = 0;
     p_gnu_extension_visability = SgDeclarationStatement::e_gnu_attribute_visability_unspecified;
     p_gnu_extension_declaration_attribute = SgVariableDeclaration::e_gnu_attribute_unspecified;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_isAssociatedWithDeclarationList = false;
     p_isFirstDeclarationOfDeclarationList = true;
     p_is_thread_local = false;
     p_is_constexpr = false;
     p_builtFromUseOnly = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VAR_DECL_STMT == this->variant());
     ASSERT_require(VAR_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVariableDeclaration() function since it has been problematic
     ASSERT_not_null(isSgVariableDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 2558 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateVariableDeclaration::SgTemplateVariableDeclaration (  )
   : SgVariableDeclaration()
   {
#ifdef DEBUG
  // printf ("In SgTemplateVariableDeclaration::SgTemplateVariableDeclaration () sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateParameters = SgTemplateParameterPtrList();
     p_templateSpecializationArguments = SgTemplateArgumentPtrList();
     p_string = "";
     p_nonreal_decl_scope = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_VARIABLE_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_VARIABLE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateVariableDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateVariableDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 2588 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateVariableInstantiation::SgTemplateVariableInstantiation ( SgTemplateVariableDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgVariableDeclaration()
   {
#ifdef DEBUG
  // printf ("In SgTemplateVariableInstantiation::SgTemplateVariableInstantiation (SgTemplateVariableDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateHeader = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_VARIABLE_INST_STMT == this->variant());
     ASSERT_require(TEMPLATE_VARIABLE_INST_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateVariableInstantiation() function since it has been problematic
     ASSERT_not_null(isSgTemplateVariableInstantiation(this));
   }

// Generated constructor (all data members)

/* #line 2618 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariableDefinition::SgVariableDefinition ( SgInitializedName* vardefn, SgExpression* bitfield )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgVariableDefinition::SgVariableDefinition (SgInitializedName* vardefn, SgExpression* bitfield) sage_class_name() = %s \n",sage_class_name());
#endif

     p_vardefn = vardefn;
     p_bitfield = bitfield;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VAR_DEFN_STMT == this->variant());
     ASSERT_require(VAR_DEFN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVariableDefinition() function since it has been problematic
     ASSERT_not_null(isSgVariableDefinition(this));
   }

// Generated constructor (all data members)

/* #line 2646 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClinkageDeclarationStatement::SgClinkageDeclarationStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClinkageDeclarationStatement::SgClinkageDeclarationStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_languageSpecifier = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(C_LINKAGE_DECLARATION_STMT == this->variant());
     ASSERT_require(C_LINKAGE_DECLARATION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClinkageDeclarationStatement() function since it has been problematic
     ASSERT_not_null(isSgClinkageDeclarationStatement(this));
   }

// Generated constructor (all data members)

/* #line 2673 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClinkageStartStatement::SgClinkageStartStatement (  )
   : SgClinkageDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClinkageStartStatement::SgClinkageStartStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(C_LINKAGE_START_STMT == this->variant());
     ASSERT_require(C_LINKAGE_START_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClinkageStartStatement() function since it has been problematic
     ASSERT_not_null(isSgClinkageStartStatement(this));
   }

// Generated constructor (all data members)

/* #line 2698 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClinkageEndStatement::SgClinkageEndStatement (  )
   : SgClinkageDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClinkageEndStatement::SgClinkageEndStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(C_LINKAGE_END_STMT == this->variant());
     ASSERT_require(C_LINKAGE_END_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClinkageEndStatement() function since it has been problematic
     ASSERT_not_null(isSgClinkageEndStatement(this));
   }

// Generated constructor (all data members)

/* #line 2723 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEnumDeclaration::SgEnumDeclaration ( SgName name, SgEnumType* type )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgEnumDeclaration::SgEnumDeclaration (SgName name, SgEnumType* type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_embedded =false;
     p_type = type;
     p_adaParentType = NULL;
     p_scope = NULL;
     p_isUnNamed = false;
     p_isAutonomousDeclaration = true;
     p_field_type = NULL;
     p_isScopedEnum = false;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ENUM_DECL_STMT == this->variant());
     ASSERT_require(ENUM_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEnumDeclaration() function since it has been problematic
     ASSERT_not_null(isSgEnumDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 2761 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsmStmt::SgAsmStmt (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAsmStmt::SgAsmStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_assemblyCode = "";
     p_useGnuExtendedFormat = false;
     p_isVolatile = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ASM_STMT == this->variant());
     ASSERT_require(ASM_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAsmStmt() function since it has been problematic
     ASSERT_not_null(isSgAsmStmt(this));
   }

// Generated constructor (all data members)

/* #line 2790 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAttributeSpecificationStatement::SgAttributeSpecificationStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAttributeSpecificationStatement::SgAttributeSpecificationStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_attribute_kind = SgAttributeSpecificationStatement::e_unknown_attribute_spec;
     p_intent = 0;
     p_parameter_list = NULL;
     p_bind_list = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Attribute_Specification_Statement == this->variant());
     ASSERT_require(TEMP_Attribute_Specification_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAttributeSpecificationStatement() function since it has been problematic
     ASSERT_not_null(isSgAttributeSpecificationStatement(this));
   }

// Generated constructor (all data members)

/* #line 2820 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFormatStatement::SgFormatStatement ( SgFormatItemList* format_item_list )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFormatStatement::SgFormatStatement (SgFormatItemList* format_item_list) sage_class_name() = %s \n",sage_class_name());
#endif

     p_format_item_list = format_item_list;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FORMAT_STATEMENT == this->variant());
     ASSERT_require(FORMAT_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFormatStatement() function since it has been problematic
     ASSERT_not_null(isSgFormatStatement(this));
   }

// Generated constructor (all data members)

/* #line 2847 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateDeclaration::SgTemplateDeclaration ( SgName name )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgTemplateDeclaration::SgTemplateDeclaration (SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_string = "";
     p_template_kind = SgTemplateDeclaration::e_template_none;
     p_templateParameters = SgTemplateParameterPtrList();
     p_scope = NULL;
     p_nonreal_decl_scope = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 2879 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationDirectiveStatement::SgTemplateInstantiationDirectiveStatement ( SgDeclarationStatement* declaration )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationDirectiveStatement::SgTemplateInstantiationDirectiveStatement (SgDeclarationStatement* declaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_declaration = declaration;
     p_do_not_instantiate = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_INST_DIRECTIVE_STMT == this->variant());
     ASSERT_require(TEMPLATE_INST_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateInstantiationDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgTemplateInstantiationDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 2907 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUseStatement::SgUseStatement ( SgName name, bool only_option, std::string module_nature )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgUseStatement::SgUseStatement (SgName name, bool only_option, std::string module_nature) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_only_option = only_option;
     p_module_nature = module_nature;
     p_module = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(USE_STATEMENT == this->variant());
     ASSERT_require(USE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUseStatement() function since it has been problematic
     ASSERT_not_null(isSgUseStatement(this));
   }

// Generated constructor (all data members)

/* #line 2937 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgParameterStatement::SgParameterStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgParameterStatement::SgParameterStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(PARAMETER_STATEMENT == this->variant());
     ASSERT_require(PARAMETER_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgParameterStatement() function since it has been problematic
     ASSERT_not_null(isSgParameterStatement(this));
   }

// Generated constructor (all data members)

/* #line 2962 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamespaceDeclarationStatement::SgNamespaceDeclarationStatement ( SgName name, SgNamespaceDefinitionStatement* definition, bool isUnnamedNamespace )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamespaceDeclarationStatement::SgNamespaceDeclarationStatement (SgName name, SgNamespaceDefinitionStatement* definition, bool isUnnamedNamespace) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_isUnnamedNamespace = isUnnamedNamespace;
     p_isInlinedNamespace = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NAMESPACE_DECLARATION_STMT == this->variant());
     ASSERT_require(NAMESPACE_DECLARATION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNamespaceDeclarationStatement() function since it has been problematic
     ASSERT_not_null(isSgNamespaceDeclarationStatement(this));
   }

// Generated constructor (all data members)

/* #line 2992 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEquivalenceStatement::SgEquivalenceStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgEquivalenceStatement::SgEquivalenceStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_equivalence_set_list = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Equivalence_Statement == this->variant());
     ASSERT_require(TEMP_Equivalence_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEquivalenceStatement() function since it has been problematic
     ASSERT_not_null(isSgEquivalenceStatement(this));
   }

// Generated constructor (all data members)

/* #line 3019 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInterfaceStatement::SgInterfaceStatement ( SgName name, SgInterfaceStatement::generic_spec_enum generic_spec )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgInterfaceStatement::SgInterfaceStatement (SgName name, SgInterfaceStatement::generic_spec_enum generic_spec) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_generic_spec = generic_spec;
     p_end_numeric_label = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(INTERFACE_STATEMENT == this->variant());
     ASSERT_require(INTERFACE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgInterfaceStatement() function since it has been problematic
     ASSERT_not_null(isSgInterfaceStatement(this));
   }

// Generated constructor (all data members)

/* #line 3048 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamespaceAliasDeclarationStatement::SgNamespaceAliasDeclarationStatement ( SgName name, SgNamespaceDeclarationStatement* namespaceDeclaration )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamespaceAliasDeclarationStatement::SgNamespaceAliasDeclarationStatement (SgName name, SgNamespaceDeclarationStatement* namespaceDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_namespaceDeclaration = namespaceDeclaration;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_is_alias_for_another_namespace_alias = false;
     p_namespaceAliasDeclaration = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NAMESPACE_ALIAS_DECLARATION_STMT == this->variant());
     ASSERT_require(NAMESPACE_ALIAS_DECLARATION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNamespaceAliasDeclarationStatement() function since it has been problematic
     ASSERT_not_null(isSgNamespaceAliasDeclarationStatement(this));
   }

// Generated constructor (all data members)

/* #line 3081 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCommonBlock::SgCommonBlock (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgCommonBlock::SgCommonBlock () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(COMMON_BLOCK == this->variant());
     ASSERT_require(COMMON_BLOCK == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCommonBlock() function since it has been problematic
     ASSERT_not_null(isSgCommonBlock(this));
   }

// Generated constructor (all data members)

/* #line 3106 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypedefDeclaration::SgTypedefDeclaration ( SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgTypedefDeclaration::SgTypedefDeclaration (SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_base_type = base_type;
     p_type = type;
     p_declaration = declaration;
     p_parent_scope = parent_scope;
     p_typedefBaseTypeContainsDefiningDeclaration = false;
     p_scope = NULL;
     p_requiresGlobalNameQualificationOnType = false;
     p_name_qualification_length_for_base_type = 0;
     p_type_elaboration_required_for_base_type = false;
     p_global_qualification_required_for_base_type = false;
     p_isAutonomousDeclaration = true;
     p_isAssociatedWithDeclarationList = false;
     p_isFirstDeclarationOfDeclarationList = true;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TYPEDEF_STMT == this->variant());
     ASSERT_require(TYPEDEF_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTypedefDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTypedefDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3149 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateTypedefDeclaration::SgTemplateTypedefDeclaration ( SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope )
   : SgTypedefDeclaration(name, base_type, type, declaration, parent_scope)
   {
#ifdef DEBUG
  // printf ("In SgTemplateTypedefDeclaration::SgTemplateTypedefDeclaration (SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateParameters = SgTemplateParameterPtrList();
     p_templateSpecializationArguments = SgTemplateArgumentPtrList();
     p_string = "";
     p_nonreal_decl_scope = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_TYPEDEF_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_TYPEDEF_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateTypedefDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateTypedefDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3179 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationTypedefDeclaration::SgTemplateInstantiationTypedefDeclaration ( SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope, SgTemplateTypedefDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgTypedefDeclaration(name, base_type, type, declaration, parent_scope)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationTypedefDeclaration::SgTemplateInstantiationTypedefDeclaration (SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope, SgTemplateTypedefDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateHeader = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_INST_TYPEDEF_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_INST_TYPEDEF_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateInstantiationTypedefDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateInstantiationTypedefDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3210 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStatementFunctionStatement::SgStatementFunctionStatement ( SgFunctionDeclaration* function, SgExpression* expression )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgStatementFunctionStatement::SgStatementFunctionStatement (SgFunctionDeclaration* function, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function = function;
     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Statement_Function_Statement == this->variant());
     ASSERT_require(TEMP_Statement_Function_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStatementFunctionStatement() function since it has been problematic
     ASSERT_not_null(isSgStatementFunctionStatement(this));
   }

// Generated constructor (all data members)

/* #line 3238 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCtorInitializerList::SgCtorInitializerList (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgCtorInitializerList::SgCtorInitializerList () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(CTOR_INITIALIZER_LIST == this->variant());
     ASSERT_require(CTOR_INITIALIZER_LIST == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCtorInitializerList() function since it has been problematic
     ASSERT_not_null(isSgCtorInitializerList(this));
   }

// Generated constructor (all data members)

/* #line 3263 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPragmaDeclaration::SgPragmaDeclaration ( SgPragma* pragma )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgPragmaDeclaration::SgPragmaDeclaration (SgPragma* pragma) sage_class_name() = %s \n",sage_class_name());
#endif

     p_pragma = pragma;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PRAGMA_DECL == this->variant());
     ASSERT_require(PRAGMA_DECL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPragmaDeclaration() function since it has been problematic
     ASSERT_not_null(isSgPragmaDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3290 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUsingDirectiveStatement::SgUsingDirectiveStatement ( SgNamespaceDeclarationStatement* namespaceDeclaration )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgUsingDirectiveStatement::SgUsingDirectiveStatement (SgNamespaceDeclarationStatement* namespaceDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_namespaceDeclaration = namespaceDeclaration;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(USING_DIRECTIVE_STMT == this->variant());
     ASSERT_require(USING_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUsingDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgUsingDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 3320 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassDeclaration::SgClassDeclaration ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClassDeclaration::SgClassDeclaration (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_class_type = class_type;
     p_type = type;
     p_definition = definition;
     p_scope = NULL;
     p_specialization = SgDeclarationStatement::e_no_specialization;
     p_from_template = false;
     p_fixupScope = false;
     p_isUnNamed = false;
     p_explicit_annotation_interface = false;
     p_explicit_interface = false;
     p_explicit_enum = false;
     p_explicit_anonymous = false;
     p_decoratorList = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_isAutonomousDeclaration = true;
     p_isRepresentingTemplateParameterInTemplateDeclaration = false;
     p_adaParentType = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CLASS_DECL_STMT == this->variant());
     ASSERT_require(CLASS_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClassDeclaration() function since it has been problematic
     ASSERT_not_null(isSgClassDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3366 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateClassDeclaration::SgTemplateClassDeclaration ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateClassDeclaration::SgTemplateClassDeclaration (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateParameters = SgTemplateParameterPtrList();
     p_templateSpecializationArguments = SgTemplateArgumentPtrList();
     p_string = "";
     p_templateName = "";
     p_nonreal_decl_scope = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_CLASS_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_CLASS_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateClassDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateClassDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3397 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationDecl::SgTemplateInstantiationDecl ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition, SgTemplateClassDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationDecl::SgTemplateInstantiationDecl (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition, SgTemplateClassDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateHeader = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_INST_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_INST_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateInstantiationDecl() function since it has been problematic
     ASSERT_not_null(isSgTemplateInstantiationDecl(this));
   }

// Generated constructor (all data members)

/* #line 3428 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDerivedTypeStatement::SgDerivedTypeStatement ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgDerivedTypeStatement::SgDerivedTypeStatement (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_end_numeric_label = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Derived_Type_Statement == this->variant());
     ASSERT_require(TEMP_Derived_Type_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDerivedTypeStatement() function since it has been problematic
     ASSERT_not_null(isSgDerivedTypeStatement(this));
   }

// Generated constructor (all data members)

/* #line 3455 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgModuleStatement::SgModuleStatement ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgModuleStatement::SgModuleStatement (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_end_numeric_label = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(MODULE_STATEMENT == this->variant());
     ASSERT_require(MODULE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgModuleStatement() function since it has been problematic
     ASSERT_not_null(isSgModuleStatement(this));
   }

// Generated constructor (all data members)

/* #line 3482 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaPackageDeclaration::SgJavaPackageDeclaration ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgJavaPackageDeclaration::SgJavaPackageDeclaration (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_JavaPackageDeclaration == this->variant());
     ASSERT_require(TEMP_JavaPackageDeclaration == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaPackageDeclaration() function since it has been problematic
     ASSERT_not_null(isSgJavaPackageDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3507 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialTableStatement::SgJovialTableStatement ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgJovialTableStatement::SgJovialTableStatement (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_table_entry_size = NULL;
     p_has_table_entry_size = false;
     p_words_per_entry = SgJovialTableStatement::WordsPerEntry::e_default;
     p_like_table_name = "";
     p_has_like_option = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Jovial_Table_Statement == this->variant());
     ASSERT_require(TEMP_Jovial_Table_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialTableStatement() function since it has been problematic
     ASSERT_not_null(isSgJovialTableStatement(this));
   }

// Generated constructor (all data members)

/* #line 3538 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImplicitStatement::SgImplicitStatement ( bool implicit_none )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgImplicitStatement::SgImplicitStatement (bool implicit_none) sage_class_name() = %s \n",sage_class_name());
#endif

     p_implicit_none = implicit_none;
     p_implicit_spec = SgImplicitStatement::e_unknown_implicit_spec;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Implicit_Statement == this->variant());
     ASSERT_require(TEMP_Implicit_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgImplicitStatement() function since it has been problematic
     ASSERT_not_null(isSgImplicitStatement(this));
   }

// Generated constructor (all data members)

/* #line 3566 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUsingDeclarationStatement::SgUsingDeclarationStatement ( SgDeclarationStatement* declaration, SgInitializedName* initializedName )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgUsingDeclarationStatement::SgUsingDeclarationStatement (SgDeclarationStatement* declaration, SgInitializedName* initializedName) sage_class_name() = %s \n",sage_class_name());
#endif

     p_declaration = declaration;
     p_initializedName = initializedName;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_is_inheriting_constructor = false;
     p_adaTypeAttribute = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(USING_DECLARATION_STMT == this->variant());
     ASSERT_require(USING_DECLARATION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUsingDeclarationStatement() function since it has been problematic
     ASSERT_not_null(isSgUsingDeclarationStatement(this));
   }

// Generated constructor (all data members)

/* #line 3599 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamelistStatement::SgNamelistStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamelistStatement::SgNamelistStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_Namelist_Statement == this->variant());
     ASSERT_require(TEMP_Namelist_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNamelistStatement() function since it has been problematic
     ASSERT_not_null(isSgNamelistStatement(this));
   }

// Generated constructor (all data members)

/* #line 3624 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImportStatement::SgImportStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgImportStatement::SgImportStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_Import_Statement == this->variant());
     ASSERT_require(TEMP_Import_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgImportStatement() function since it has been problematic
     ASSERT_not_null(isSgImportStatement(this));
   }

// Generated constructor (all data members)

/* #line 3649 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionDeclaration::SgFunctionDeclaration ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionDeclaration::SgFunctionDeclaration (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_parameterList = NULL;
     p_named_in_end_statement = false;
     p_asm_name = "";
     p_decoratorList = NULL;
     p_ada_formal_subprogram_decl = false;
     p_ada_formal_decl_with_box = false;
     p_type = type;
     p_definition = definition;
     p_oldStyleDefinition = false;
     p_scope = NULL;
     p_specialization = SgDeclarationStatement::e_no_specialization;
     p_requiresNameQualificationOnReturnType = false;
     p_gnu_extension_section = "";
     p_gnu_extension_alias = "";
     p_gnu_extension_visability = SgDeclarationStatement::e_gnu_attribute_visability_unspecified;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_name_qualification_length_for_return_type = 0;
     p_type_elaboration_required_for_return_type = false;
     p_global_qualification_required_for_return_type = false;
     p_prototypeIsWithoutParameters = false;
     p_gnu_regparm_attribute = -1;
     p_type_syntax = NULL;
     p_type_syntax_is_available = false;
     p_parameterList_syntax = NULL;
     p_using_C11_Noreturn_keyword = false;
     p_is_constexpr = false;
     p_using_new_function_return_type_syntax = false;
     p_functionParameterScope = NULL;
     p_marked_as_edg_normalization = false;
     p_is_implicit_function = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FUNC_DECL_STMT == this->variant());
     ASSERT_require(FUNC_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionDeclaration() function since it has been problematic
     ASSERT_not_null(isSgFunctionDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3708 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateFunctionDeclaration::SgTemplateFunctionDeclaration ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateFunctionDeclaration::SgTemplateFunctionDeclaration (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateParameters = SgTemplateParameterPtrList();
     p_templateSpecializationArguments = SgTemplateArgumentPtrList();
     p_string = "";
     p_string_represents_function_body = false;
     p_nonreal_decl_scope = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_FUNCTION_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_FUNCTION_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateFunctionDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateFunctionDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3739 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMemberFunctionDeclaration::SgMemberFunctionDeclaration ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgMemberFunctionDeclaration::SgMemberFunctionDeclaration (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_CtorInitializerList = NULL;
     p_associatedClassDeclaration = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(MFUNC_DECL_STMT == this->variant());
     ASSERT_require(MFUNC_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMemberFunctionDeclaration() function since it has been problematic
     ASSERT_not_null(isSgMemberFunctionDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3767 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateMemberFunctionDeclaration::SgTemplateMemberFunctionDeclaration ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgMemberFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateMemberFunctionDeclaration::SgTemplateMemberFunctionDeclaration (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateParameters = SgTemplateParameterPtrList();
     p_templateSpecializationArguments = SgTemplateArgumentPtrList();
     p_string = "";
     p_string_represents_function_body = false;
     p_nonreal_decl_scope = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_MEMBER_FUNCTION_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_MEMBER_FUNCTION_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateMemberFunctionDeclaration() function since it has been problematic
     ASSERT_not_null(isSgTemplateMemberFunctionDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 3798 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationMemberFunctionDecl::SgTemplateInstantiationMemberFunctionDecl ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateMemberFunctionDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgMemberFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationMemberFunctionDecl::SgTemplateInstantiationMemberFunctionDecl (SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateMemberFunctionDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;
     p_template_argument_list_is_explicit = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_INST_MEMBER_FUNCTION_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_INST_MEMBER_FUNCTION_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateInstantiationMemberFunctionDecl() function since it has been problematic
     ASSERT_not_null(isSgTemplateInstantiationMemberFunctionDecl(this));
   }

// Generated constructor (all data members)

/* #line 3829 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationFunctionDecl::SgTemplateInstantiationFunctionDecl ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateFunctionDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationFunctionDecl::SgTemplateInstantiationFunctionDecl (SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateFunctionDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;
     p_template_argument_list_is_explicit = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_INST_FUNCTION_DECL_STMT == this->variant());
     ASSERT_require(TEMPLATE_INST_FUNCTION_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateInstantiationFunctionDecl() function since it has been problematic
     ASSERT_not_null(isSgTemplateInstantiationFunctionDecl(this));
   }

// Generated constructor (all data members)

/* #line 3860 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgProgramHeaderStatement::SgProgramHeaderStatement ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgProgramHeaderStatement::SgProgramHeaderStatement (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_program_statement_explicit = false;
     p_end_numeric_label = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PROGRAM_HEADER_STMT == this->variant());
     ASSERT_require(PROGRAM_HEADER_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgProgramHeaderStatement() function since it has been problematic
     ASSERT_not_null(isSgProgramHeaderStatement(this));
   }

// Generated constructor (all data members)

/* #line 3888 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgProcedureHeaderStatement::SgProcedureHeaderStatement ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgProcedureHeaderStatement::SgProcedureHeaderStatement (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_subprogram_kind = SgProcedureHeaderStatement::e_unknown_kind;
     p_end_numeric_label = NULL;
     p_result_name = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PROCEDURE_HEADER_STMT == this->variant());
     ASSERT_require(PROCEDURE_HEADER_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgProcedureHeaderStatement() function since it has been problematic
     ASSERT_not_null(isSgProcedureHeaderStatement(this));
   }

// Generated constructor (all data members)

/* #line 3917 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEntryStatement::SgEntryStatement ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgEntryStatement::SgEntryStatement (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_result_name = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ENTRY_STMT == this->variant());
     ASSERT_require(ENTRY_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEntryStatement() function since it has been problematic
     ASSERT_not_null(isSgEntryStatement(this));
   }

// Generated constructor (all data members)

/* #line 3944 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaEntryDecl::SgAdaEntryDecl ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgAdaEntryDecl::SgAdaEntryDecl (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_entryIndex = nullptr;
     p_entryBarrier = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_ENTRY_DECL_STMT == this->variant());
     ASSERT_require(ADA_ENTRY_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaEntryDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaEntryDecl(this));
   }

// Generated constructor (all data members)

/* #line 3972 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaFunctionRenamingDecl::SgAdaFunctionRenamingDecl ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgAdaFunctionRenamingDecl::SgAdaFunctionRenamingDecl (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_renamed_function = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_FUNCTION_RENAMING_DECL_STMT == this->variant());
     ASSERT_require(ADA_FUNCTION_RENAMING_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaFunctionRenamingDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaFunctionRenamingDecl(this));
   }

// Generated constructor (all data members)

/* #line 3999 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgContainsStatement::SgContainsStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgContainsStatement::SgContainsStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_Contains_Statement == this->variant());
     ASSERT_require(TEMP_Contains_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgContainsStatement() function since it has been problematic
     ASSERT_not_null(isSgContainsStatement(this));
   }

// Generated constructor (all data members)

/* #line 4024 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgC_PreprocessorDirectiveStatement::SgC_PreprocessorDirectiveStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgC_PreprocessorDirectiveStatement::SgC_PreprocessorDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_directiveString = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CPP_DIRECTIVE_STMT == this->variant());
     ASSERT_require(CPP_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgC_PreprocessorDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgC_PreprocessorDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4051 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIncludeDirectiveStatement::SgIncludeDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIncludeDirectiveStatement::SgIncludeDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_headerFileBody = NULL;
     p_include_file_heirarchy = NULL;
     p_name_used_in_include_directive = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(INCLUDE_DIRECTIVE_STMT == this->variant());
     ASSERT_require(INCLUDE_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIncludeDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgIncludeDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4080 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDefineDirectiveStatement::SgDefineDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgDefineDirectiveStatement::SgDefineDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DEFINE_DIRECTIVE_STMT == this->variant());
     ASSERT_require(DEFINE_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDefineDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgDefineDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4105 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUndefDirectiveStatement::SgUndefDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgUndefDirectiveStatement::SgUndefDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(UNDEF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(UNDEF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUndefDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgUndefDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4130 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfdefDirectiveStatement::SgIfdefDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfdefDirectiveStatement::SgIfdefDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IFDEF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(IFDEF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIfdefDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgIfdefDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4155 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfndefDirectiveStatement::SgIfndefDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfndefDirectiveStatement::SgIfndefDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IFNDEF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(IFNDEF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIfndefDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgIfndefDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4180 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfDirectiveStatement::SgIfDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfDirectiveStatement::SgIfDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(IF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIfDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgIfDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4205 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeadIfDirectiveStatement::SgDeadIfDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeadIfDirectiveStatement::SgDeadIfDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DEAD_IF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(DEAD_IF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDeadIfDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgDeadIfDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4230 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElseDirectiveStatement::SgElseDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgElseDirectiveStatement::SgElseDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELSE_DIRECTIVE_STMT == this->variant());
     ASSERT_require(ELSE_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElseDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgElseDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4255 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElseifDirectiveStatement::SgElseifDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgElseifDirectiveStatement::SgElseifDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELSEIF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(ELSEIF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElseifDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgElseifDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4280 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEndifDirectiveStatement::SgEndifDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgEndifDirectiveStatement::SgEndifDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ENDIF_DIRECTIVE_STMT == this->variant());
     ASSERT_require(ENDIF_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEndifDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgEndifDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4305 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLineDirectiveStatement::SgLineDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgLineDirectiveStatement::SgLineDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LINE_DIRECTIVE_STMT == this->variant());
     ASSERT_require(LINE_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLineDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgLineDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4330 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWarningDirectiveStatement::SgWarningDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgWarningDirectiveStatement::SgWarningDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(WARNING_DIRECTIVE_STMT == this->variant());
     ASSERT_require(WARNING_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWarningDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgWarningDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4355 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgErrorDirectiveStatement::SgErrorDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgErrorDirectiveStatement::SgErrorDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ERROR_DIRECTIVE_STMT == this->variant());
     ASSERT_require(ERROR_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgErrorDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgErrorDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4380 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEmptyDirectiveStatement::SgEmptyDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgEmptyDirectiveStatement::SgEmptyDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EMPTY_DIRECTIVE_STMT == this->variant());
     ASSERT_require(EMPTY_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEmptyDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgEmptyDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4405 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIncludeNextDirectiveStatement::SgIncludeNextDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIncludeNextDirectiveStatement::SgIncludeNextDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(INCLUDE_NEXT_DIRECTIVE_STMT == this->variant());
     ASSERT_require(INCLUDE_NEXT_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIncludeNextDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgIncludeNextDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4430 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIdentDirectiveStatement::SgIdentDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIdentDirectiveStatement::SgIdentDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IDENT_DIRECTIVE_STMT == this->variant());
     ASSERT_require(IDENT_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIdentDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgIdentDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4455 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLinemarkerDirectiveStatement::SgLinemarkerDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgLinemarkerDirectiveStatement::SgLinemarkerDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_linenumber = -1;
     p_filename = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LINEMARKER_DIRECTIVE_STMT == this->variant());
     ASSERT_require(LINEMARKER_DIRECTIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLinemarkerDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgLinemarkerDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4483 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpThreadprivateStatement::SgOmpThreadprivateStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpThreadprivateStatement::SgOmpThreadprivateStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_THREADPRIVATE_STMT == this->variant());
     ASSERT_require(OMP_THREADPRIVATE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpThreadprivateStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpThreadprivateStatement(this));
   }

// Generated constructor (all data members)

/* #line 4508 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranIncludeLine::SgFortranIncludeLine ( std::string filename )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFortranIncludeLine::SgFortranIncludeLine (std::string filename) sage_class_name() = %s \n",sage_class_name());
#endif

     p_filename = filename;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Fortran_Include_Line == this->variant());
     ASSERT_require(TEMP_Fortran_Include_Line == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFortranIncludeLine() function since it has been problematic
     ASSERT_not_null(isSgFortranIncludeLine(this));
   }

// Generated constructor (all data members)

/* #line 4535 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaImportStatement::SgJavaImportStatement ( SgName path, bool containsWildCard )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaImportStatement::SgJavaImportStatement (SgName path, bool containsWildCard) sage_class_name() = %s \n",sage_class_name());
#endif

     p_path = path;
     p_containsWildCard = containsWildCard;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_JavaImportStatement == this->variant());
     ASSERT_require(TEMP_JavaImportStatement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaImportStatement() function since it has been problematic
     ASSERT_not_null(isSgJavaImportStatement(this));
   }

// Generated constructor (all data members)

/* #line 4563 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaPackageStatement::SgJavaPackageStatement ( SgName name )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaPackageStatement::SgJavaPackageStatement (SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_JavaPackageStatement == this->variant());
     ASSERT_require(TEMP_JavaPackageStatement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaPackageStatement() function since it has been problematic
     ASSERT_not_null(isSgJavaPackageStatement(this));
   }

// Generated constructor (all data members)

/* #line 4590 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStmtDeclarationStatement::SgStmtDeclarationStatement ( SgStatement* statement )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgStmtDeclarationStatement::SgStmtDeclarationStatement (SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_statement = statement;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(STMT_DECL_STMT == this->variant());
     ASSERT_require(STMT_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStmtDeclarationStatement() function since it has been problematic
     ASSERT_not_null(isSgStmtDeclarationStatement(this));
   }

// Generated constructor (all data members)

/* #line 4617 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStaticAssertionDeclaration::SgStaticAssertionDeclaration ( SgExpression* condition, SgName string_literal )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgStaticAssertionDeclaration::SgStaticAssertionDeclaration (SgExpression* condition, SgName string_literal) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_string_literal = string_literal;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(STATIC_ASSERTION_DECLARATION == this->variant());
     ASSERT_require(STATIC_ASSERTION_DECLARATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStaticAssertionDeclaration() function since it has been problematic
     ASSERT_not_null(isSgStaticAssertionDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 4645 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDeclareSimdStatement::SgOmpDeclareSimdStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpDeclareSimdStatement::SgOmpDeclareSimdStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_DECLARE_SIMD_STMT == this->variant());
     ASSERT_require(OMP_DECLARE_SIMD_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpDeclareSimdStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpDeclareSimdStatement(this));
   }

// Generated constructor (all data members)

/* #line 4670 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMicrosoftAttributeDeclaration::SgMicrosoftAttributeDeclaration ( SgName attribute_string )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgMicrosoftAttributeDeclaration::SgMicrosoftAttributeDeclaration (SgName attribute_string) sage_class_name() = %s \n",sage_class_name());
#endif

     p_attribute_string = attribute_string;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(MS_ATTRIBUTE_DECL_STMT == this->variant());
     ASSERT_require(MS_ATTRIBUTE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMicrosoftAttributeDeclaration() function since it has been problematic
     ASSERT_not_null(isSgMicrosoftAttributeDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 4697 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialCompoolStatement::SgJovialCompoolStatement ( SgName name )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJovialCompoolStatement::SgJovialCompoolStatement (SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_COMPOOL_STATEMENT == this->variant());
     ASSERT_require(JOVIAL_COMPOOL_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialCompoolStatement() function since it has been problematic
     ASSERT_not_null(isSgJovialCompoolStatement(this));
   }

// Generated constructor (all data members)

/* #line 4724 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialDirectiveStatement::SgJovialDirectiveStatement ( std::string content_string, SgJovialDirectiveStatement::directive_types directive_type )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJovialDirectiveStatement::SgJovialDirectiveStatement (std::string content_string, SgJovialDirectiveStatement::directive_types directive_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_content_string = content_string;
     p_directive_type = directive_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_DIRECTIVE_STATEMENT == this->variant());
     ASSERT_require(JOVIAL_DIRECTIVE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialDirectiveStatement() function since it has been problematic
     ASSERT_not_null(isSgJovialDirectiveStatement(this));
   }

// Generated constructor (all data members)

/* #line 4752 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialDefineDeclaration::SgJovialDefineDeclaration ( std::string define_string )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJovialDefineDeclaration::SgJovialDefineDeclaration (std::string define_string) sage_class_name() = %s \n",sage_class_name());
#endif

     p_define_string = define_string;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_DEFINE_DECLARATION == this->variant());
     ASSERT_require(JOVIAL_DEFINE_DECLARATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialDefineDeclaration() function since it has been problematic
     ASSERT_not_null(isSgJovialDefineDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 4779 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialLabelDeclaration::SgJovialLabelDeclaration ( std::string label, SgJovialLabelDeclaration::label_type_enum label_type )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJovialLabelDeclaration::SgJovialLabelDeclaration (std::string label, SgJovialLabelDeclaration::label_type_enum label_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_label_type = label_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_LABEL_DECLARATION == this->variant());
     ASSERT_require(JOVIAL_LABEL_DECLARATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialLabelDeclaration() function since it has been problematic
     ASSERT_not_null(isSgJovialLabelDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 4807 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialOverlayDeclaration::SgJovialOverlayDeclaration ( SgExpression* address, SgExprListExp* overlay )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJovialOverlayDeclaration::SgJovialOverlayDeclaration (SgExpression* address, SgExprListExp* overlay) sage_class_name() = %s \n",sage_class_name());
#endif

     p_address = address;
     p_overlay = overlay;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_OVERLAY_DECLARATION == this->variant());
     ASSERT_require(JOVIAL_OVERLAY_DECLARATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialOverlayDeclaration() function since it has been problematic
     ASSERT_not_null(isSgJovialOverlayDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 4835 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNonrealDecl::SgNonrealDecl ( SgName name )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNonrealDecl::SgNonrealDecl (SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_nonreal_decl_scope = NULL;
     p_type = NULL;
     p_template_parameter_position = -1;
     p_template_parameter_depth = -1;
     p_templateDeclaration = NULL;
     p_tpl_args = SgTemplateArgumentPtrList();
     p_tpl_params = SgTemplateParameterPtrList();
     p_is_class_member = false;
     p_is_template_param = false;
     p_is_template_template_param = false;
     p_is_nonreal_template = false;
     p_is_nonreal_function = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NONREAL_DECL == this->variant());
     ASSERT_require(NONREAL_DECL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNonrealDecl() function since it has been problematic
     ASSERT_not_null(isSgNonrealDecl(this));
   }

// Generated constructor (all data members)

/* #line 4874 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEmptyDeclaration::SgEmptyDeclaration (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgEmptyDeclaration::SgEmptyDeclaration () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EMPTY_DECLARATION_STMT == this->variant());
     ASSERT_require(EMPTY_DECLARATION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEmptyDeclaration() function since it has been problematic
     ASSERT_not_null(isSgEmptyDeclaration(this));
   }

// Generated constructor (all data members)

/* #line 4899 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaPackageBodyDecl::SgAdaPackageBodyDecl ( SgName name, SgAdaPackageBody* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaPackageBodyDecl::SgAdaPackageBodyDecl (SgName name, SgAdaPackageBody* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_scope = nullptr;
     p_spec = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PACKAGE_BODY_DECL_STMT == this->variant());
     ASSERT_require(ADA_PACKAGE_BODY_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaPackageBodyDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaPackageBodyDecl(this));
   }

// Generated constructor (all data members)

/* #line 4929 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaPackageSpecDecl::SgAdaPackageSpecDecl ( SgName name, SgAdaPackageSpec* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaPackageSpecDecl::SgAdaPackageSpecDecl (SgName name, SgAdaPackageSpec* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_scope = nullptr;
     p_body = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PACKAGE_SPEC_DECL_STMT == this->variant());
     ASSERT_require(ADA_PACKAGE_SPEC_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaPackageSpecDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaPackageSpecDecl(this));
   }

// Generated constructor (all data members)

/* #line 4959 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaRenamingDecl::SgAdaRenamingDecl ( SgName name, SgExpression* renamed, SgType* type )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaRenamingDecl::SgAdaRenamingDecl (SgName name, SgExpression* renamed, SgType* type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_renamed = renamed;
     p_type = type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_RENAMING_DECL_STMT == this->variant());
     ASSERT_require(ADA_RENAMING_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaRenamingDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaRenamingDecl(this));
   }

// Generated constructor (all data members)

/* #line 4988 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTaskSpecDecl::SgAdaTaskSpecDecl ( SgName name, SgAdaTaskSpec* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaTaskSpecDecl::SgAdaTaskSpecDecl (SgName name, SgAdaTaskSpec* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_type = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_TASK_SPEC_DECL_STMT == this->variant());
     ASSERT_require(ADA_TASK_SPEC_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTaskSpecDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaTaskSpecDecl(this));
   }

// Generated constructor (all data members)

/* #line 5017 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTaskBodyDecl::SgAdaTaskBodyDecl ( SgName name, SgDeclarationStatement* specificationDeclaration, SgAdaTaskBody* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaTaskBodyDecl::SgAdaTaskBodyDecl (SgName name, SgDeclarationStatement* specificationDeclaration, SgAdaTaskBody* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_specificationDeclaration = specificationDeclaration;
     p_definition = definition;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_TASK_BODY_DECL_STMT == this->variant());
     ASSERT_require(ADA_TASK_BODY_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTaskBodyDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaTaskBodyDecl(this));
   }

// Generated constructor (all data members)

/* #line 5046 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTaskTypeDecl::SgAdaTaskTypeDecl ( SgName name, SgAdaTaskSpec* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaTaskTypeDecl::SgAdaTaskTypeDecl (SgName name, SgAdaTaskSpec* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_type = nullptr;
     p_scope = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_TASK_TYPE_DECL_STMT == this->variant());
     ASSERT_require(ADA_TASK_TYPE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTaskTypeDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaTaskTypeDecl(this));
   }

// Generated constructor (all data members)

/* #line 5076 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaProtectedSpecDecl::SgAdaProtectedSpecDecl ( SgName name, SgAdaProtectedSpec* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaProtectedSpecDecl::SgAdaProtectedSpecDecl (SgName name, SgAdaProtectedSpec* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_type = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PROTECTED_SPEC_DECL_STMT == this->variant());
     ASSERT_require(ADA_PROTECTED_SPEC_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaProtectedSpecDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaProtectedSpecDecl(this));
   }

// Generated constructor (all data members)

/* #line 5105 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaProtectedBodyDecl::SgAdaProtectedBodyDecl ( SgName name, SgDeclarationStatement* specificationDeclaration, SgAdaProtectedBody* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaProtectedBodyDecl::SgAdaProtectedBodyDecl (SgName name, SgDeclarationStatement* specificationDeclaration, SgAdaProtectedBody* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_specificationDeclaration = specificationDeclaration;
     p_definition = definition;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PROTECTED_BODY_DECL_STMT == this->variant());
     ASSERT_require(ADA_PROTECTED_BODY_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaProtectedBodyDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaProtectedBodyDecl(this));
   }

// Generated constructor (all data members)

/* #line 5134 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaProtectedTypeDecl::SgAdaProtectedTypeDecl ( SgName name, SgAdaProtectedSpec* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaProtectedTypeDecl::SgAdaProtectedTypeDecl (SgName name, SgAdaProtectedSpec* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_type = nullptr;
     p_scope = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PROTECTED_TYPE_DECL_STMT == this->variant());
     ASSERT_require(ADA_PROTECTED_TYPE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaProtectedTypeDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaProtectedTypeDecl(this));
   }

// Generated constructor (all data members)

/* #line 5164 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaRepresentationClause::SgAdaRepresentationClause ( SgType* recordType, SgExpression* alignment, SgBasicBlock* components )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaRepresentationClause::SgAdaRepresentationClause (SgType* recordType, SgExpression* alignment, SgBasicBlock* components) sage_class_name() = %s \n",sage_class_name());
#endif

     p_recordType = recordType;
     p_alignment = alignment;
     p_components = components;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_REPRESENTATION_CLAUSE == this->variant());
     ASSERT_require(ADA_REPRESENTATION_CLAUSE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaRepresentationClause() function since it has been problematic
     ASSERT_not_null(isSgAdaRepresentationClause(this));
   }

// Generated constructor (all data members)

/* #line 5193 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaComponentClause::SgAdaComponentClause ( SgVarRefExp* component, SgExpression* offset, SgRangeExp* range )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaComponentClause::SgAdaComponentClause (SgVarRefExp* component, SgExpression* offset, SgRangeExp* range) sage_class_name() = %s \n",sage_class_name());
#endif

     p_component = component;
     p_offset = offset;
     p_range = range;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_COMPONENT_CLAUSE == this->variant());
     ASSERT_require(ADA_COMPONENT_CLAUSE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaComponentClause() function since it has been problematic
     ASSERT_not_null(isSgAdaComponentClause(this));
   }

// Generated constructor (all data members)

/* #line 5222 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaAttributeClause::SgAdaAttributeClause ( SgAdaAttributeExp* attribute, SgExpression* size )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaAttributeClause::SgAdaAttributeClause (SgAdaAttributeExp* attribute, SgExpression* size) sage_class_name() = %s \n",sage_class_name());
#endif

     p_attribute = attribute;
     p_size = size;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_ATTRIBUTE_CLAUSE == this->variant());
     ASSERT_require(ADA_ATTRIBUTE_CLAUSE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaAttributeClause() function since it has been problematic
     ASSERT_not_null(isSgAdaAttributeClause(this));
   }

// Generated constructor (all data members)

/* #line 5250 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaEnumRepresentationClause::SgAdaEnumRepresentationClause ( SgType* enumType, SgExprListExp* components )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaEnumRepresentationClause::SgAdaEnumRepresentationClause (SgType* enumType, SgExprListExp* components) sage_class_name() = %s \n",sage_class_name());
#endif

     p_enumType = enumType;
     p_components = components;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_ENUM_REPRESENTATION_CLAUSE == this->variant());
     ASSERT_require(ADA_ENUM_REPRESENTATION_CLAUSE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaEnumRepresentationClause() function since it has been problematic
     ASSERT_not_null(isSgAdaEnumRepresentationClause(this));
   }

// Generated constructor (all data members)

/* #line 5278 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaGenericDecl::SgAdaGenericDecl ( SgName name, SgAdaGenericDefn* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaGenericDecl::SgAdaGenericDecl (SgName name, SgAdaGenericDefn* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_declaration = nullptr;
     p_scope = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_GENERIC_DECL == this->variant());
     ASSERT_require(ADA_GENERIC_DECL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaGenericDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaGenericDecl(this));
   }

// Generated constructor (all data members)

/* #line 5308 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaFormalTypeDecl::SgAdaFormalTypeDecl ( SgName name )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaFormalTypeDecl::SgAdaFormalTypeDecl (SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_type = nullptr;
     p_discriminants = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_FORMAL_TYPE_DECL_STMT == this->variant());
     ASSERT_require(ADA_FORMAL_TYPE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaFormalTypeDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaFormalTypeDecl(this));
   }

// Generated constructor (all data members)

/* #line 5337 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaDiscriminatedTypeDecl::SgAdaDiscriminatedTypeDecl ( SgDeclarationScope* discriminantScope, SgAdaParameterList* discriminants )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaDiscriminatedTypeDecl::SgAdaDiscriminatedTypeDecl (SgDeclarationScope* discriminantScope, SgAdaParameterList* discriminants) sage_class_name() = %s \n",sage_class_name());
#endif

     p_discriminantScope = discriminantScope;
     p_discriminants = discriminants;
     p_discriminatedDecl = nullptr;
     p_type = nullptr;
     p_scope = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_DISCRIMINATED_TYPE_DECL == this->variant());
     ASSERT_require(ADA_DISCRIMINATED_TYPE_DECL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaDiscriminatedTypeDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaDiscriminatedTypeDecl(this));
   }

// Generated constructor (all data members)

/* #line 5368 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaGenericInstanceDecl::SgAdaGenericInstanceDecl ( SgName name, SgDeclarationStatement* genericDeclaration, SgScopeStatement* instantiatedScope )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaGenericInstanceDecl::SgAdaGenericInstanceDecl (SgName name, SgDeclarationStatement* genericDeclaration, SgScopeStatement* instantiatedScope) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_genericDeclaration = genericDeclaration;
     p_instantiatedScope = instantiatedScope;
     p_actual_parameters = nullptr;
     p_scope = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_GENERIC_INSTANCE_DECL == this->variant());
     ASSERT_require(ADA_GENERIC_INSTANCE_DECL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaGenericInstanceDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaGenericInstanceDecl(this));
   }

// Generated constructor (all data members)

/* #line 5399 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaFormalPackageDecl::SgAdaFormalPackageDecl ( SgName name, SgDeclarationStatement* declaration, SgExprListExp* actual_parameters )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaFormalPackageDecl::SgAdaFormalPackageDecl (SgName name, SgDeclarationStatement* declaration, SgExprListExp* actual_parameters) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_declaration = declaration;
     p_actual_parameters = actual_parameters;
     p_prototype = nullptr;
     p_prototypeScope = nullptr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_FORMAL_PACKAGE_DECL_STMT == this->variant());
     ASSERT_require(ADA_FORMAL_PACKAGE_DECL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaFormalPackageDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaFormalPackageDecl(this));
   }

// Generated constructor (all data members)

/* #line 5430 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaParameterList::SgAdaParameterList (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaParameterList::SgAdaParameterList () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ADA_PARAMETER_LIST == this->variant());
     ASSERT_require(ADA_PARAMETER_LIST == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaParameterList() function since it has been problematic
     ASSERT_not_null(isSgAdaParameterList(this));
   }

// Generated constructor (all data members)

/* #line 5455 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaVariantDecl::SgAdaVariantDecl ( SgExpression* discriminant, SgAdaUnscopedBlock* variants )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaVariantDecl::SgAdaVariantDecl (SgExpression* discriminant, SgAdaUnscopedBlock* variants) sage_class_name() = %s \n",sage_class_name());
#endif

     p_discriminant = discriminant;
     p_variants = variants;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_VARIANT_DECL_STATEMENT == this->variant());
     ASSERT_require(ADA_VARIANT_DECL_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaVariantDecl() function since it has been problematic
     ASSERT_not_null(isSgAdaVariantDecl(this));
   }

// Generated constructor (all data members)

/* #line 5483 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExprStatement::SgExprStatement ( SgExpression* expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgExprStatement::SgExprStatement (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(EXPR_STMT == this->variant());
     ASSERT_require(EXPR_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExprStatement() function since it has been problematic
     ASSERT_not_null(isSgExprStatement(this));
   }

// Generated constructor (all data members)

/* #line 5510 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLabelStatement::SgLabelStatement ( SgName label, SgStatement* statement )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgLabelStatement::SgLabelStatement (SgName label, SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_scope = NULL;
     p_statement = statement;
     p_label_type = SgLabelStatement::e_default;
     p_gnu_extension_unused = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LABEL_STMT == this->variant());
     ASSERT_require(LABEL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLabelStatement() function since it has been problematic
     ASSERT_not_null(isSgLabelStatement(this));
   }

// Generated constructor (all data members)

/* #line 5541 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCaseOptionStmt::SgCaseOptionStmt ( SgExpression* key, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgCaseOptionStmt::SgCaseOptionStmt (SgExpression* key, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_key = key;
     p_body = body;
     p_key_range_end  = NULL;
     p_case_construct_name  = "";
     p_has_fall_through  = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CASE_STMT == this->variant());
     ASSERT_require(CASE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCaseOptionStmt() function since it has been problematic
     ASSERT_not_null(isSgCaseOptionStmt(this));
   }

// Generated constructor (all data members)

/* #line 5572 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTryStmt::SgTryStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgTryStmt::SgTryStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;
     p_catch_statement_seq_root = NULL;
     p_else_body = NULL;
     p_finally_body = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TRY_STMT == this->variant());
     ASSERT_require(TRY_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTryStmt() function since it has been problematic
     ASSERT_not_null(isSgTryStmt(this));
   }

// Generated constructor (all data members)

/* #line 5602 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDefaultOptionStmt::SgDefaultOptionStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgDefaultOptionStmt::SgDefaultOptionStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;
     p_default_construct_name  = "";
     p_has_fall_through  = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DEFAULT_STMT == this->variant());
     ASSERT_require(DEFAULT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDefaultOptionStmt() function since it has been problematic
     ASSERT_not_null(isSgDefaultOptionStmt(this));
   }

// Generated constructor (all data members)

/* #line 5631 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBreakStmt::SgBreakStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgBreakStmt::SgBreakStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_do_string_label = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(BREAK_STMT == this->variant());
     ASSERT_require(BREAK_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBreakStmt() function since it has been problematic
     ASSERT_not_null(isSgBreakStmt(this));
   }

// Generated constructor (all data members)

/* #line 5658 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgContinueStmt::SgContinueStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgContinueStmt::SgContinueStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_do_string_label = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CONTINUE_STMT == this->variant());
     ASSERT_require(CONTINUE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgContinueStmt() function since it has been problematic
     ASSERT_not_null(isSgContinueStmt(this));
   }

// Generated constructor (all data members)

/* #line 5685 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgReturnStmt::SgReturnStmt ( SgExpression* expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgReturnStmt::SgReturnStmt (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(RETURN_STMT == this->variant());
     ASSERT_require(RETURN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgReturnStmt() function since it has been problematic
     ASSERT_not_null(isSgReturnStmt(this));
   }

// Generated constructor (all data members)

/* #line 5712 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGotoStatement::SgGotoStatement ( SgLabelStatement* label )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgGotoStatement::SgGotoStatement (SgLabelStatement* label) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_label_expression = NULL;
     p_selector_expression = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(GOTO_STMT == this->variant());
     ASSERT_require(GOTO_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgGotoStatement() function since it has been problematic
     ASSERT_not_null(isSgGotoStatement(this));
   }

// Generated constructor (all data members)

/* #line 5741 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSpawnStmt::SgSpawnStmt ( SgFunctionCallExp* the_func )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgSpawnStmt::SgSpawnStmt (SgFunctionCallExp* the_func) sage_class_name() = %s \n",sage_class_name());
#endif

     p_the_func = the_func;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SPAWN_STMT == this->variant());
     ASSERT_require(SPAWN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSpawnStmt() function since it has been problematic
     ASSERT_not_null(isSgSpawnStmt(this));
   }

// Generated constructor (all data members)

/* #line 5768 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullStatement::SgNullStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgNullStatement::SgNullStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NULL_STMT == this->variant());
     ASSERT_require(NULL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNullStatement() function since it has been problematic
     ASSERT_not_null(isSgNullStatement(this));
   }

// Generated constructor (all data members)

/* #line 5793 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariantStatement::SgVariantStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgVariantStatement::SgVariantStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(VARIANT_STMT == this->variant());
     ASSERT_require(VARIANT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVariantStatement() function since it has been problematic
     ASSERT_not_null(isSgVariantStatement(this));
   }

// Generated constructor (all data members)

/* #line 5818 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgForInitStatement::SgForInitStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgForInitStatement::SgForInitStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(FOR_INIT_STMT == this->variant());
     ASSERT_require(FOR_INIT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgForInitStatement() function since it has been problematic
     ASSERT_not_null(isSgForInitStatement(this));
   }

// Generated constructor (all data members)

/* #line 5843 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCatchStatementSeq::SgCatchStatementSeq (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgCatchStatementSeq::SgCatchStatementSeq () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(CATCH_STATEMENT_SEQ == this->variant());
     ASSERT_require(CATCH_STATEMENT_SEQ == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCatchStatementSeq() function since it has been problematic
     ASSERT_not_null(isSgCatchStatementSeq(this));
   }

// Generated constructor (all data members)

/* #line 5868 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgProcessControlStatement::SgProcessControlStatement ( SgExpression* code )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgProcessControlStatement::SgProcessControlStatement (SgExpression* code) sage_class_name() = %s \n",sage_class_name());
#endif

     p_control_kind = SgProcessControlStatement::e_unknown;
     p_code = code;
     p_quiet = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PROCESS_CONTROL_STATEMENT == this->variant());
     ASSERT_require(PROCESS_CONTROL_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgProcessControlStatement() function since it has been problematic
     ASSERT_not_null(isSgProcessControlStatement(this));
   }

// Generated constructor (all data members)

/* #line 5897 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIOStatement::SgIOStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgIOStatement::SgIOStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_io_statement = SgIOStatement::e_unknown;
     p_io_stmt_list = NULL;
     p_unit = NULL;
     p_iostat = NULL;
     p_err = NULL;
     p_iomsg = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(IO_STATEMENT == this->variant());
     ASSERT_require(IO_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIOStatement() function since it has been problematic
     ASSERT_not_null(isSgIOStatement(this));
   }

// Generated constructor (all data members)

/* #line 5929 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPrintStatement::SgPrintStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgPrintStatement::SgPrintStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_format = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PRINT_STATEMENT == this->variant());
     ASSERT_require(PRINT_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPrintStatement() function since it has been problematic
     ASSERT_not_null(isSgPrintStatement(this));
   }

// Generated constructor (all data members)

/* #line 5956 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgReadStatement::SgReadStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgReadStatement::SgReadStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_format = NULL;
     p_namelist = NULL;
     p_advance = NULL;
     p_asynchronous = NULL;
     p_blank = NULL;
     p_decimal = NULL;
     p_delim = NULL;
     p_end = NULL;
     p_eor = NULL;
     p_id = NULL;
     p_pad = NULL;
     p_pos = NULL;
     p_rec = NULL;
     p_round = NULL;
     p_sign = NULL;
     p_size = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(READ_STATEMENT == this->variant());
     ASSERT_require(READ_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgReadStatement() function since it has been problematic
     ASSERT_not_null(isSgReadStatement(this));
   }

// Generated constructor (all data members)

/* #line 5998 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWriteStatement::SgWriteStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgWriteStatement::SgWriteStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_format = NULL;
     p_namelist = NULL;
     p_advance = NULL;
     p_asynchronous = NULL;
     p_blank = NULL;
     p_decimal = NULL;
     p_delim = NULL;
     p_end = NULL;
     p_eor = NULL;
     p_id = NULL;
     p_pad = NULL;
     p_pos = NULL;
     p_rec = NULL;
     p_round = NULL;
     p_sign = NULL;
     p_size = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(WRITE_STATEMENT == this->variant());
     ASSERT_require(WRITE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWriteStatement() function since it has been problematic
     ASSERT_not_null(isSgWriteStatement(this));
   }

// Generated constructor (all data members)

/* #line 6040 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOpenStatement::SgOpenStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgOpenStatement::SgOpenStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_file = NULL;
     p_status = NULL;
     p_access = NULL;
     p_form = NULL;
     p_recl = NULL;
     p_blank = NULL;
     p_position = NULL;
     p_action = NULL;
     p_delim = NULL;
     p_pad = NULL;
     p_round = NULL;
     p_sign = NULL;
     p_asynchronous = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OPEN_STATEMENT == this->variant());
     ASSERT_require(OPEN_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOpenStatement() function since it has been problematic
     ASSERT_not_null(isSgOpenStatement(this));
   }

// Generated constructor (all data members)

/* #line 6079 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCloseStatement::SgCloseStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgCloseStatement::SgCloseStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_status = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CLOSE_STATEMENT == this->variant());
     ASSERT_require(CLOSE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCloseStatement() function since it has been problematic
     ASSERT_not_null(isSgCloseStatement(this));
   }

// Generated constructor (all data members)

/* #line 6106 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInquireStatement::SgInquireStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgInquireStatement::SgInquireStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_file = NULL;
     p_access = NULL;
     p_form = NULL;
     p_recl = NULL;
     p_blank = NULL;
     p_exist = NULL;
     p_opened = NULL;
     p_number = NULL;
     p_named = NULL;
     p_name = NULL;
     p_sequential = NULL;
     p_direct = NULL;
     p_formatted = NULL;
     p_unformatted = NULL;
     p_nextrec = NULL;
     p_position = NULL;
     p_action = NULL;
     p_read = NULL;
     p_write = NULL;
     p_readwrite = NULL;
     p_delim = NULL;
     p_pad = NULL;
     p_asynchronous = NULL;
     p_decimal = NULL;
     p_stream = NULL;
     p_size = NULL;
     p_pending = NULL;
     p_iolengthExp = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(INQUIRE_STATEMENT == this->variant());
     ASSERT_require(INQUIRE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgInquireStatement() function since it has been problematic
     ASSERT_not_null(isSgInquireStatement(this));
   }

// Generated constructor (all data members)

/* #line 6160 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFlushStatement::SgFlushStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgFlushStatement::SgFlushStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(FLUSH_STATEMENT == this->variant());
     ASSERT_require(FLUSH_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFlushStatement() function since it has been problematic
     ASSERT_not_null(isSgFlushStatement(this));
   }

// Generated constructor (all data members)

/* #line 6185 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBackspaceStatement::SgBackspaceStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgBackspaceStatement::SgBackspaceStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(BACKSPACE_STATEMENT == this->variant());
     ASSERT_require(BACKSPACE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBackspaceStatement() function since it has been problematic
     ASSERT_not_null(isSgBackspaceStatement(this));
   }

// Generated constructor (all data members)

/* #line 6210 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRewindStatement::SgRewindStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgRewindStatement::SgRewindStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(REWIND_STATEMENT == this->variant());
     ASSERT_require(REWIND_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRewindStatement() function since it has been problematic
     ASSERT_not_null(isSgRewindStatement(this));
   }

// Generated constructor (all data members)

/* #line 6235 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEndfileStatement::SgEndfileStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgEndfileStatement::SgEndfileStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ENDFILE_STATEMENT == this->variant());
     ASSERT_require(ENDFILE_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEndfileStatement() function since it has been problematic
     ASSERT_not_null(isSgEndfileStatement(this));
   }

// Generated constructor (all data members)

/* #line 6260 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWaitStatement::SgWaitStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgWaitStatement::SgWaitStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(WAIT_STATEMENT == this->variant());
     ASSERT_require(WAIT_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWaitStatement() function since it has been problematic
     ASSERT_not_null(isSgWaitStatement(this));
   }

// Generated constructor (all data members)

/* #line 6285 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranContinueStmt::SgFortranContinueStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgFortranContinueStmt::SgFortranContinueStmt () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(FORTRAN_CONTINUE_STMT == this->variant());
     ASSERT_require(FORTRAN_CONTINUE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFortranContinueStmt() function since it has been problematic
     ASSERT_not_null(isSgFortranContinueStmt(this));
   }

// Generated constructor (all data members)

/* #line 6310 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWhereStatement::SgWhereStatement ( SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgWhereStatement::SgWhereStatement (SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_elsewhere = elsewhere;
     p_end_numeric_label = NULL;
     p_string_label = "";
     p_has_end_statement = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Where_Statement == this->variant());
     ASSERT_require(TEMP_Where_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWhereStatement() function since it has been problematic
     ASSERT_not_null(isSgWhereStatement(this));
   }

// Generated constructor (all data members)

/* #line 6342 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElseWhereStatement::SgElseWhereStatement ( SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgElseWhereStatement::SgElseWhereStatement (SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_elsewhere = elsewhere;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Else_Where_Statement == this->variant());
     ASSERT_require(TEMP_Else_Where_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElseWhereStatement() function since it has been problematic
     ASSERT_not_null(isSgElseWhereStatement(this));
   }

// Generated constructor (all data members)

/* #line 6371 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullifyStatement::SgNullifyStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgNullifyStatement::SgNullifyStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_Nullify_Statement == this->variant());
     ASSERT_require(TEMP_Nullify_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNullifyStatement() function since it has been problematic
     ASSERT_not_null(isSgNullifyStatement(this));
   }

// Generated constructor (all data members)

/* #line 6396 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgArithmeticIfStatement::SgArithmeticIfStatement ( SgExpression* conditional, SgLabelRefExp* less_label, SgLabelRefExp* equal_label, SgLabelRefExp* greater_label )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgArithmeticIfStatement::SgArithmeticIfStatement (SgExpression* conditional, SgLabelRefExp* less_label, SgLabelRefExp* equal_label, SgLabelRefExp* greater_label) sage_class_name() = %s \n",sage_class_name());
#endif

     p_conditional = conditional;
     p_less_label = less_label;
     p_equal_label = equal_label;
     p_greater_label = greater_label;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Arithmetic_If_Statement == this->variant());
     ASSERT_require(TEMP_Arithmetic_If_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgArithmeticIfStatement() function since it has been problematic
     ASSERT_not_null(isSgArithmeticIfStatement(this));
   }

// Generated constructor (all data members)

/* #line 6426 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignStatement::SgAssignStatement ( SgLabelRefExp* label, SgExpression* value )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssignStatement::SgAssignStatement (SgLabelRefExp* label, SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Assign_Statement == this->variant());
     ASSERT_require(TEMP_Assign_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAssignStatement() function since it has been problematic
     ASSERT_not_null(isSgAssignStatement(this));
   }

// Generated constructor (all data members)

/* #line 6454 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgComputedGotoStatement::SgComputedGotoStatement ( SgExprListExp* labelList, SgExpression* label_index )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgComputedGotoStatement::SgComputedGotoStatement (SgExprListExp* labelList, SgExpression* label_index) sage_class_name() = %s \n",sage_class_name());
#endif

     p_labelList = labelList;
     p_label_index = label_index;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Computed_Goto_Statement == this->variant());
     ASSERT_require(TEMP_Computed_Goto_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgComputedGotoStatement() function since it has been problematic
     ASSERT_not_null(isSgComputedGotoStatement(this));
   }

// Generated constructor (all data members)

/* #line 6482 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignedGotoStatement::SgAssignedGotoStatement ( SgExprListExp* targets )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssignedGotoStatement::SgAssignedGotoStatement (SgExprListExp* targets) sage_class_name() = %s \n",sage_class_name());
#endif

     p_targets = targets;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Assigned_Goto_Statement == this->variant());
     ASSERT_require(TEMP_Assigned_Goto_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAssignedGotoStatement() function since it has been problematic
     ASSERT_not_null(isSgAssignedGotoStatement(this));
   }

// Generated constructor (all data members)

/* #line 6509 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAllocateStatement::SgAllocateStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAllocateStatement::SgAllocateStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_expr_list = NULL;
     p_stat_expression = NULL;
     p_errmsg_expression = NULL;
     p_source_expression = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Allocate_Statement == this->variant());
     ASSERT_require(TEMP_Allocate_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAllocateStatement() function since it has been problematic
     ASSERT_not_null(isSgAllocateStatement(this));
   }

// Generated constructor (all data members)

/* #line 6539 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeallocateStatement::SgDeallocateStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeallocateStatement::SgDeallocateStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_expr_list = NULL;
     p_stat_expression = NULL;
     p_errmsg_expression = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_Deallocate_Statement == this->variant());
     ASSERT_require(TEMP_Deallocate_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDeallocateStatement() function since it has been problematic
     ASSERT_not_null(isSgDeallocateStatement(this));
   }

// Generated constructor (all data members)

/* #line 6568 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcNotifyStatement::SgUpcNotifyStatement ( SgExpression* notify_expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcNotifyStatement::SgUpcNotifyStatement (SgExpression* notify_expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_notify_expression = notify_expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_NOTIFY_STMT == this->variant());
     ASSERT_require(UPC_NOTIFY_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcNotifyStatement() function since it has been problematic
     ASSERT_not_null(isSgUpcNotifyStatement(this));
   }

// Generated constructor (all data members)

/* #line 6595 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcWaitStatement::SgUpcWaitStatement ( SgExpression* wait_expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcWaitStatement::SgUpcWaitStatement (SgExpression* wait_expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_wait_expression = wait_expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_WAIT_STMT == this->variant());
     ASSERT_require(UPC_WAIT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcWaitStatement() function since it has been problematic
     ASSERT_not_null(isSgUpcWaitStatement(this));
   }

// Generated constructor (all data members)

/* #line 6622 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcBarrierStatement::SgUpcBarrierStatement ( SgExpression* barrier_expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcBarrierStatement::SgUpcBarrierStatement (SgExpression* barrier_expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_barrier_expression = barrier_expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_BARRIER_STMT == this->variant());
     ASSERT_require(UPC_BARRIER_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcBarrierStatement() function since it has been problematic
     ASSERT_not_null(isSgUpcBarrierStatement(this));
   }

// Generated constructor (all data members)

/* #line 6649 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcFenceStatement::SgUpcFenceStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcFenceStatement::SgUpcFenceStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(UPC_FENCE_STMT == this->variant());
     ASSERT_require(UPC_FENCE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcFenceStatement() function since it has been problematic
     ASSERT_not_null(isSgUpcFenceStatement(this));
   }

// Generated constructor (all data members)

/* #line 6674 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpBarrierStatement::SgOmpBarrierStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpBarrierStatement::SgOmpBarrierStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_BARRIER_STMT == this->variant());
     ASSERT_require(OMP_BARRIER_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpBarrierStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpBarrierStatement(this));
   }

// Generated constructor (all data members)

/* #line 6699 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpTaskwaitStatement::SgOmpTaskwaitStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpTaskwaitStatement::SgOmpTaskwaitStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_TASKWAIT_STMT == this->variant());
     ASSERT_require(OMP_TASKWAIT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpTaskwaitStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpTaskwaitStatement(this));
   }

// Generated constructor (all data members)

/* #line 6724 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpFlushStatement::SgOmpFlushStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpFlushStatement::SgOmpFlushStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_FLUSH_STMT == this->variant());
     ASSERT_require(OMP_FLUSH_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpFlushStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpFlushStatement(this));
   }

// Generated constructor (all data members)

/* #line 6749 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpBodyStatement::SgOmpBodyStatement ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpBodyStatement::SgOmpBodyStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OMP_BODY_STMT == this->variant());
     ASSERT_require(OMP_BODY_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpBodyStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpBodyStatement(this));
   }

// Generated constructor (all data members)

/* #line 6776 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpMasterStatement::SgOmpMasterStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpMasterStatement::SgOmpMasterStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_MASTER_STMT == this->variant());
     ASSERT_require(OMP_MASTER_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpMasterStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpMasterStatement(this));
   }

// Generated constructor (all data members)

/* #line 6801 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpOrderedStatement::SgOmpOrderedStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpOrderedStatement::SgOmpOrderedStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_ORDERED_STMT == this->variant());
     ASSERT_require(OMP_ORDERED_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpOrderedStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpOrderedStatement(this));
   }

// Generated constructor (all data members)

/* #line 6826 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCriticalStatement::SgOmpCriticalStatement ( SgStatement* body, SgName name )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpCriticalStatement::SgOmpCriticalStatement (SgStatement* body, SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(OMP_CRITICAL_STMT == this->variant());
     ASSERT_require(OMP_CRITICAL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpCriticalStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpCriticalStatement(this));
   }

// Generated constructor (all data members)

/* #line 6853 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSectionStatement::SgOmpSectionStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSectionStatement::SgOmpSectionStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_SECTION_STMT == this->variant());
     ASSERT_require(OMP_SECTION_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSectionStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpSectionStatement(this));
   }

// Generated constructor (all data members)

/* #line 6878 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpWorkshareStatement::SgOmpWorkshareStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpWorkshareStatement::SgOmpWorkshareStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_WORKSHARE_STMT == this->variant());
     ASSERT_require(OMP_WORKSHARE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpWorkshareStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpWorkshareStatement(this));
   }

// Generated constructor (all data members)

/* #line 6903 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpClauseBodyStatement::SgOmpClauseBodyStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpClauseBodyStatement::SgOmpClauseBodyStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_CLAUSEBODY_STMT == this->variant());
     ASSERT_require(OMP_CLAUSEBODY_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpClauseBodyStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpClauseBodyStatement(this));
   }

// Generated constructor (all data members)

/* #line 6928 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpParallelStatement::SgOmpParallelStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpParallelStatement::SgOmpParallelStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_PARALLEL_STMT == this->variant());
     ASSERT_require(OMP_PARALLEL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpParallelStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpParallelStatement(this));
   }

// Generated constructor (all data members)

/* #line 6953 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSingleStatement::SgOmpSingleStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSingleStatement::SgOmpSingleStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_SINGLE_STMT == this->variant());
     ASSERT_require(OMP_SINGLE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSingleStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpSingleStatement(this));
   }

// Generated constructor (all data members)

/* #line 6978 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpAtomicStatement::SgOmpAtomicStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpAtomicStatement::SgOmpAtomicStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_ATOMIC_STMT == this->variant());
     ASSERT_require(OMP_ATOMIC_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpAtomicStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpAtomicStatement(this));
   }

// Generated constructor (all data members)

/* #line 7003 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpTaskStatement::SgOmpTaskStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpTaskStatement::SgOmpTaskStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_TASK_STMT == this->variant());
     ASSERT_require(OMP_TASK_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpTaskStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpTaskStatement(this));
   }

// Generated constructor (all data members)

/* #line 7028 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpForStatement::SgOmpForStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpForStatement::SgOmpForStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_FOR_STMT == this->variant());
     ASSERT_require(OMP_FOR_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpForStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpForStatement(this));
   }

// Generated constructor (all data members)

/* #line 7053 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDoStatement::SgOmpDoStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpDoStatement::SgOmpDoStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_DO_STMT == this->variant());
     ASSERT_require(OMP_DO_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpDoStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpDoStatement(this));
   }

// Generated constructor (all data members)

/* #line 7078 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSectionsStatement::SgOmpSectionsStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSectionsStatement::SgOmpSectionsStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_SECTIONS_STMT == this->variant());
     ASSERT_require(OMP_SECTIONS_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSectionsStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpSectionsStatement(this));
   }

// Generated constructor (all data members)

/* #line 7103 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpTargetStatement::SgOmpTargetStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpTargetStatement::SgOmpTargetStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_TARGET_STMT == this->variant());
     ASSERT_require(OMP_TARGET_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpTargetStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpTargetStatement(this));
   }

// Generated constructor (all data members)

/* #line 7128 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpTargetDataStatement::SgOmpTargetDataStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpTargetDataStatement::SgOmpTargetDataStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_TARGET_DATA_STMT == this->variant());
     ASSERT_require(OMP_TARGET_DATA_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpTargetDataStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpTargetDataStatement(this));
   }

// Generated constructor (all data members)

/* #line 7153 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSimdStatement::SgOmpSimdStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSimdStatement::SgOmpSimdStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_SIMD_STMT == this->variant());
     ASSERT_require(OMP_SIMD_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpSimdStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpSimdStatement(this));
   }

// Generated constructor (all data members)

/* #line 7178 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpForSimdStatement::SgOmpForSimdStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpForSimdStatement::SgOmpForSimdStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OMP_FOR_SIMD_STMT == this->variant());
     ASSERT_require(OMP_FOR_SIMD_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOmpForSimdStatement() function since it has been problematic
     ASSERT_not_null(isSgOmpForSimdStatement(this));
   }

// Generated constructor (all data members)

/* #line 7203 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSequenceStatement::SgSequenceStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgSequenceStatement::SgSequenceStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_Sequence_Statement == this->variant());
     ASSERT_require(TEMP_Sequence_Statement == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSequenceStatement() function since it has been problematic
     ASSERT_not_null(isSgSequenceStatement(this));
   }

// Generated constructor (all data members)

/* #line 7228 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWithStatement::SgWithStatement ( SgExpression* expression, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgWithStatement::SgWithStatement (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(WITH_STATEMENT == this->variant());
     ASSERT_require(WITH_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWithStatement() function since it has been problematic
     ASSERT_not_null(isSgWithStatement(this));
   }

// Generated constructor (all data members)

/* #line 7256 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPythonPrintStmt::SgPythonPrintStmt ( SgExpression* destination, SgExprListExp* values )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgPythonPrintStmt::SgPythonPrintStmt (SgExpression* destination, SgExprListExp* values) sage_class_name() = %s \n",sage_class_name());
#endif

     p_destination = destination;
     p_values = values;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PYTHON_PRINT_STMT == this->variant());
     ASSERT_require(PYTHON_PRINT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPythonPrintStmt() function since it has been problematic
     ASSERT_not_null(isSgPythonPrintStmt(this));
   }

// Generated constructor (all data members)

/* #line 7284 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPassStatement::SgPassStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgPassStatement::SgPassStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(PASS_STATEMENT == this->variant());
     ASSERT_require(PASS_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPassStatement() function since it has been problematic
     ASSERT_not_null(isSgPassStatement(this));
   }

// Generated constructor (all data members)

/* #line 7309 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssertStmt::SgAssertStmt ( SgExpression* test )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssertStmt::SgAssertStmt (SgExpression* test) sage_class_name() = %s \n",sage_class_name());
#endif

     p_test = test;
     p_exception_argument = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ASSERT_STMT == this->variant());
     ASSERT_require(ASSERT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAssertStmt() function since it has been problematic
     ASSERT_not_null(isSgAssertStmt(this));
   }

// Generated constructor (all data members)

/* #line 7337 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExecStatement::SgExecStatement ( SgExpression* executable, SgExpression* globals, SgExpression* locals )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgExecStatement::SgExecStatement (SgExpression* executable, SgExpression* globals, SgExpression* locals) sage_class_name() = %s \n",sage_class_name());
#endif

     p_executable = executable;
     p_globals = globals;
     p_locals = locals;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(EXEC_STMT == this->variant());
     ASSERT_require(EXEC_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExecStatement() function since it has been problematic
     ASSERT_not_null(isSgExecStatement(this));
   }

// Generated constructor (all data members)

/* #line 7366 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPythonGlobalStmt::SgPythonGlobalStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgPythonGlobalStmt::SgPythonGlobalStmt () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(PYTHON_GLOBAL_STMT == this->variant());
     ASSERT_require(PYTHON_GLOBAL_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPythonGlobalStmt() function since it has been problematic
     ASSERT_not_null(isSgPythonGlobalStmt(this));
   }

// Generated constructor (all data members)

/* #line 7391 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaThrowStatement::SgJavaThrowStatement ( SgThrowOp* throwOp )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaThrowStatement::SgJavaThrowStatement (SgThrowOp* throwOp) sage_class_name() = %s \n",sage_class_name());
#endif

     p_throwOp = throwOp;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVE_THROW_STMT == this->variant());
     ASSERT_require(JAVE_THROW_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaThrowStatement() function since it has been problematic
     ASSERT_not_null(isSgJavaThrowStatement(this));
   }

// Generated constructor (all data members)

/* #line 7418 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaSynchronizedStatement::SgJavaSynchronizedStatement ( SgExpression* expression, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaSynchronizedStatement::SgJavaSynchronizedStatement (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_SYNC_STMT == this->variant());
     ASSERT_require(JAVA_SYNC_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaSynchronizedStatement() function since it has been problematic
     ASSERT_not_null(isSgJavaSynchronizedStatement(this));
   }

// Generated constructor (all data members)

/* #line 7446 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsyncStmt::SgAsyncStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAsyncStmt::SgAsyncStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ASYNC_STMT == this->variant());
     ASSERT_require(ASYNC_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAsyncStmt() function since it has been problematic
     ASSERT_not_null(isSgAsyncStmt(this));
   }

// Generated constructor (all data members)

/* #line 7473 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFinishStmt::SgFinishStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgFinishStmt::SgFinishStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FINISH_STMT == this->variant());
     ASSERT_require(FINISH_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFinishStmt() function since it has been problematic
     ASSERT_not_null(isSgFinishStmt(this));
   }

// Generated constructor (all data members)

/* #line 7500 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAtStmt::SgAtStmt ( SgExpression* expression, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAtStmt::SgAtStmt (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(AT_STMT == this->variant());
     ASSERT_require(AT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAtStmt() function since it has been problematic
     ASSERT_not_null(isSgAtStmt(this));
   }

// Generated constructor (all data members)

/* #line 7528 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAtomicStmt::SgAtomicStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAtomicStmt::SgAtomicStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ATOMIC_STMT == this->variant());
     ASSERT_require(ATOMIC_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAtomicStmt() function since it has been problematic
     ASSERT_not_null(isSgAtomicStmt(this));
   }

// Generated constructor (all data members)

/* #line 7555 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWhenStmt::SgWhenStmt ( SgExpression* expression, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgWhenStmt::SgWhenStmt (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(WHEN_STMT == this->variant());
     ASSERT_require(WHEN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWhenStmt() function since it has been problematic
     ASSERT_not_null(isSgWhenStmt(this));
   }

// Generated constructor (all data members)

/* #line 7583 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImageControlStatement::SgImageControlStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgImageControlStatement::SgImageControlStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_image_control_statement = SgImageControlStatement::e_unknown;
     p_stat = NULL;
     p_err_msg = NULL;
     p_acquired_lock = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(IMAGE_CONTROL_STATEMENT == this->variant());
     ASSERT_require(IMAGE_CONTROL_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgImageControlStatement() function since it has been problematic
     ASSERT_not_null(isSgImageControlStatement(this));
   }

// Generated constructor (all data members)

/* #line 7613 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSyncAllStatement::SgSyncAllStatement (  )
   : SgImageControlStatement()
   {
#ifdef DEBUG
  // printf ("In SgSyncAllStatement::SgSyncAllStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(SYNC_ALL_STATEMENT == this->variant());
     ASSERT_require(SYNC_ALL_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSyncAllStatement() function since it has been problematic
     ASSERT_not_null(isSgSyncAllStatement(this));
   }

// Generated constructor (all data members)

/* #line 7638 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSyncImagesStatement::SgSyncImagesStatement ( SgExpression* image_set )
   : SgImageControlStatement()
   {
#ifdef DEBUG
  // printf ("In SgSyncImagesStatement::SgSyncImagesStatement (SgExpression* image_set) sage_class_name() = %s \n",sage_class_name());
#endif

     p_image_set = image_set;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SYNC_IMAGES_STATEMENT == this->variant());
     ASSERT_require(SYNC_IMAGES_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSyncImagesStatement() function since it has been problematic
     ASSERT_not_null(isSgSyncImagesStatement(this));
   }

// Generated constructor (all data members)

/* #line 7665 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSyncMemoryStatement::SgSyncMemoryStatement (  )
   : SgImageControlStatement()
   {
#ifdef DEBUG
  // printf ("In SgSyncMemoryStatement::SgSyncMemoryStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(SYNC_MEMORY_STATEMENT == this->variant());
     ASSERT_require(SYNC_MEMORY_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSyncMemoryStatement() function since it has been problematic
     ASSERT_not_null(isSgSyncMemoryStatement(this));
   }

// Generated constructor (all data members)

/* #line 7690 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSyncTeamStatement::SgSyncTeamStatement ( SgExpression* team_value )
   : SgImageControlStatement()
   {
#ifdef DEBUG
  // printf ("In SgSyncTeamStatement::SgSyncTeamStatement (SgExpression* team_value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_team_value = team_value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SYNC_TEAM_STATEMENT == this->variant());
     ASSERT_require(SYNC_TEAM_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSyncTeamStatement() function since it has been problematic
     ASSERT_not_null(isSgSyncTeamStatement(this));
   }

// Generated constructor (all data members)

/* #line 7717 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLockStatement::SgLockStatement ( SgExpression* lock_variable )
   : SgImageControlStatement()
   {
#ifdef DEBUG
  // printf ("In SgLockStatement::SgLockStatement (SgExpression* lock_variable) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lock_variable = lock_variable;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LOCK_STATEMENT == this->variant());
     ASSERT_require(LOCK_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLockStatement() function since it has been problematic
     ASSERT_not_null(isSgLockStatement(this));
   }

// Generated constructor (all data members)

/* #line 7744 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnlockStatement::SgUnlockStatement ( SgExpression* lock_variable )
   : SgImageControlStatement()
   {
#ifdef DEBUG
  // printf ("In SgUnlockStatement::SgUnlockStatement (SgExpression* lock_variable) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lock_variable = lock_variable;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNLOCK_STATEMENT == this->variant());
     ASSERT_require(UNLOCK_STATEMENT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnlockStatement() function since it has been problematic
     ASSERT_not_null(isSgUnlockStatement(this));
   }

// Generated constructor (all data members)

/* #line 7771 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaExitStmt::SgAdaExitStmt ( SgStatement* loop, SgExpression* condition, bool explicitLoopName )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaExitStmt::SgAdaExitStmt (SgStatement* loop, SgExpression* condition, bool explicitLoopName) sage_class_name() = %s \n",sage_class_name());
#endif

     p_loop = loop;
     p_condition = condition;
     p_explicitLoopName = explicitLoopName;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_EXIT_STMT == this->variant());
     ASSERT_require(ADA_EXIT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaExitStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaExitStmt(this));
   }

// Generated constructor (all data members)

/* #line 7800 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaDelayStmt::SgAdaDelayStmt ( SgExpression* time, bool isRelative )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaDelayStmt::SgAdaDelayStmt (SgExpression* time, bool isRelative) sage_class_name() = %s \n",sage_class_name());
#endif

     p_time = time;
     p_isRelative = isRelative;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_DELAY_STMT == this->variant());
     ASSERT_require(ADA_DELAY_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaDelayStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaDelayStmt(this));
   }

// Generated constructor (all data members)

/* #line 7828 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaLoopStmt::SgAdaLoopStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaLoopStmt::SgAdaLoopStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;
     p_string_label = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_LOOP_STMT == this->variant());
     ASSERT_require(ADA_LOOP_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaLoopStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaLoopStmt(this));
   }

// Generated constructor (all data members)

/* #line 7856 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaSelectStmt::SgAdaSelectStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaSelectStmt::SgAdaSelectStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_select_path = NULL;
     p_or_path = NULL;
     p_else_path = NULL;
     p_abort_path = NULL;
     p_select_type = SgAdaSelectStmt::e_unknown;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_SELECT_STMT == this->variant());
     ASSERT_require(ADA_SELECT_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaSelectStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaSelectStmt(this));
   }

// Generated constructor (all data members)

/* #line 7887 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaSelectAlternativeStmt::SgAdaSelectAlternativeStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaSelectAlternativeStmt::SgAdaSelectAlternativeStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;
     p_guard = NULL;
     p_next = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_SELECT_ALTERNATIVE_STMT == this->variant());
     ASSERT_require(ADA_SELECT_ALTERNATIVE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaSelectAlternativeStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaSelectAlternativeStmt(this));
   }

// Generated constructor (all data members)

/* #line 7916 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTerminateStmt::SgAdaTerminateStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaTerminateStmt::SgAdaTerminateStmt () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ADA_TERMINATE_STMT == this->variant());
     ASSERT_require(ADA_TERMINATE_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTerminateStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaTerminateStmt(this));
   }

// Generated constructor (all data members)

/* #line 7941 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaUnscopedBlock::SgAdaUnscopedBlock (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaUnscopedBlock::SgAdaUnscopedBlock () sage_class_name() = %s \n",sage_class_name());
#endif

     p_statements = {};

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_UNSCOPED_BLOCK == this->variant());
     ASSERT_require(ADA_UNSCOPED_BLOCK == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaUnscopedBlock() function since it has been problematic
     ASSERT_not_null(isSgAdaUnscopedBlock(this));
   }

// Generated constructor (all data members)

/* #line 7968 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaVariantWhenStmt::SgAdaVariantWhenStmt ( SgExprListExp* choices, SgAdaUnscopedBlock* components )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAdaVariantWhenStmt::SgAdaVariantWhenStmt (SgExprListExp* choices, SgAdaUnscopedBlock* components) sage_class_name() = %s \n",sage_class_name());
#endif

     p_choices = choices;
     p_components = components;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_VARIANT_WHEN_STMT == this->variant());
     ASSERT_require(ADA_VARIANT_WHEN_STMT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaVariantWhenStmt() function since it has been problematic
     ASSERT_not_null(isSgAdaVariantWhenStmt(this));
   }

// Generated constructor (all data members)

/* #line 7996 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExpression::SgExpression (  )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgExpression::SgExpression () sage_class_name() = %s \n",sage_class_name());
#endif

     p_need_paren = false;
     p_lvalue = false;
     p_global_qualified_name = false;
     p_operatorPosition = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ExpressionTag == this->variant());
     ASSERT_require(ExpressionTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExpression() function since it has been problematic
     ASSERT_not_null(isSgExpression(this));
   }

// Generated constructor (all data members)

/* #line 8026 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnaryOp::SgUnaryOp ( SgExpression* operand_i, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUnaryOp::SgUnaryOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_i = operand_i;
     p_expression_type = expression_type;
     p_mode = prefix;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNARY_EXPRESSION == this->variant());
     ASSERT_require(UNARY_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnaryOp() function since it has been problematic
     ASSERT_not_null(isSgUnaryOp(this));
   }

// Generated constructor (all data members)

/* #line 8055 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExpressionRoot::SgExpressionRoot ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgExpressionRoot::SgExpressionRoot (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EXPRESSION_ROOT == this->variant());
     ASSERT_require(EXPRESSION_ROOT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExpressionRoot() function since it has been problematic
     ASSERT_not_null(isSgExpressionRoot(this));
   }

// Generated constructor (all data members)

/* #line 8080 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMinusOp::SgMinusOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMinusOp::SgMinusOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(UNARY_MINUS_OP == this->variant());
     ASSERT_require(UNARY_MINUS_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMinusOp() function since it has been problematic
     ASSERT_not_null(isSgMinusOp(this));
   }

// Generated constructor (all data members)

/* #line 8105 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnaryAddOp::SgUnaryAddOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgUnaryAddOp::SgUnaryAddOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(UNARY_ADD_OP == this->variant());
     ASSERT_require(UNARY_ADD_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnaryAddOp() function since it has been problematic
     ASSERT_not_null(isSgUnaryAddOp(this));
   }

// Generated constructor (all data members)

/* #line 8130 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNotOp::SgNotOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgNotOp::SgNotOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NOT_OP == this->variant());
     ASSERT_require(NOT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNotOp() function since it has been problematic
     ASSERT_not_null(isSgNotOp(this));
   }

// Generated constructor (all data members)

/* #line 8155 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPointerDerefExp::SgPointerDerefExp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPointerDerefExp::SgPointerDerefExp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DEREF_OP == this->variant());
     ASSERT_require(DEREF_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPointerDerefExp() function since it has been problematic
     ASSERT_not_null(isSgPointerDerefExp(this));
   }

// Generated constructor (all data members)

/* #line 8180 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAddressOfOp::SgAddressOfOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAddressOfOp::SgAddressOfOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_originalExpressionTree = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADDRESS_OP == this->variant());
     ASSERT_require(ADDRESS_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAddressOfOp() function since it has been problematic
     ASSERT_not_null(isSgAddressOfOp(this));
   }

// Generated constructor (all data members)

/* #line 8207 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMinusMinusOp::SgMinusMinusOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMinusMinusOp::SgMinusMinusOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MINUSMINUS_OP == this->variant());
     ASSERT_require(MINUSMINUS_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMinusMinusOp() function since it has been problematic
     ASSERT_not_null(isSgMinusMinusOp(this));
   }

// Generated constructor (all data members)

/* #line 8232 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPlusPlusOp::SgPlusPlusOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPlusPlusOp::SgPlusPlusOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(PLUSPLUS_OP == this->variant());
     ASSERT_require(PLUSPLUS_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPlusPlusOp() function since it has been problematic
     ASSERT_not_null(isSgPlusPlusOp(this));
   }

// Generated constructor (all data members)

/* #line 8257 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitComplementOp::SgBitComplementOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitComplementOp::SgBitComplementOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(BIT_COMPLEMENT_OP == this->variant());
     ASSERT_require(BIT_COMPLEMENT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBitComplementOp() function since it has been problematic
     ASSERT_not_null(isSgBitComplementOp(this));
   }

// Generated constructor (all data members)

/* #line 8282 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCastExp::SgCastExp ( SgExpression* operand_i, SgType* expression_type, SgCastExp::cast_type_enum cast_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCastExp::SgCastExp (SgExpression* operand_i, SgType* expression_type, SgCastExp::cast_type_enum cast_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_cast_type = cast_type;
     p_originalExpressionTree = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_castContainsBaseTypeDefiningDeclaration = false;
     p_name_qualification_for_pointer_to_member_class_length = 0;
     p_type_elaboration_for_pointer_to_member_class_required = false;
     p_global_qualification_for_pointer_to_member_class_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CAST_OP == this->variant());
     ASSERT_require(CAST_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCastExp() function since it has been problematic
     ASSERT_not_null(isSgCastExp(this));
   }

// Generated constructor (all data members)

/* #line 8317 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgThrowOp::SgThrowOp ( SgExpression* operand_i, SgType* expression_type, SgThrowOp::e_throw_kind throwKind )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgThrowOp::SgThrowOp (SgExpression* operand_i, SgType* expression_type, SgThrowOp::e_throw_kind throwKind) sage_class_name() = %s \n",sage_class_name());
#endif

     p_throwKind = throwKind;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(THROW_OP == this->variant());
     ASSERT_require(THROW_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgThrowOp() function since it has been problematic
     ASSERT_not_null(isSgThrowOp(this));
   }

// Generated constructor (all data members)

/* #line 8344 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRealPartOp::SgRealPartOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRealPartOp::SgRealPartOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(REAL_PART_OP == this->variant());
     ASSERT_require(REAL_PART_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRealPartOp() function since it has been problematic
     ASSERT_not_null(isSgRealPartOp(this));
   }

// Generated constructor (all data members)

/* #line 8369 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImagPartOp::SgImagPartOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgImagPartOp::SgImagPartOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IMAG_PART_OP == this->variant());
     ASSERT_require(IMAG_PART_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgImagPartOp() function since it has been problematic
     ASSERT_not_null(isSgImagPartOp(this));
   }

// Generated constructor (all data members)

/* #line 8394 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConjugateOp::SgConjugateOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgConjugateOp::SgConjugateOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(CONJUGATE_OP == this->variant());
     ASSERT_require(CONJUGATE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgConjugateOp() function since it has been problematic
     ASSERT_not_null(isSgConjugateOp(this));
   }

// Generated constructor (all data members)

/* #line 8419 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUserDefinedUnaryOp::SgUserDefinedUnaryOp ( SgExpression* operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgUserDefinedUnaryOp::SgUserDefinedUnaryOp (SgExpression* operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operator_name = operator_name;
     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(USER_DEFINED_UNARY_OP == this->variant());
     ASSERT_require(USER_DEFINED_UNARY_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUserDefinedUnaryOp() function since it has been problematic
     ASSERT_not_null(isSgUserDefinedUnaryOp(this));
   }

// Generated constructor (all data members)

/* #line 8447 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMatrixTransposeOp::SgMatrixTransposeOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMatrixTransposeOp::SgMatrixTransposeOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_is_conjugate = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(MATRIX_TRANSPOSE_OP == this->variant());
     ASSERT_require(MATRIX_TRANSPOSE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMatrixTransposeOp() function since it has been problematic
     ASSERT_not_null(isSgMatrixTransposeOp(this));
   }

// Generated constructor (all data members)

/* #line 8474 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAbsOp::SgAbsOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAbsOp::SgAbsOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ABS_OP == this->variant());
     ASSERT_require(ABS_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAbsOp() function since it has been problematic
     ASSERT_not_null(isSgAbsOp(this));
   }

// Generated constructor (all data members)

/* #line 8499 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBinaryOp::SgBinaryOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgBinaryOp::SgBinaryOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs_operand_i = lhs_operand_i;
     p_rhs_operand_i = rhs_operand_i;
     p_expression_type = expression_type;
     p_originalExpressionTree = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(BINARY_EXPRESSION == this->variant());
     ASSERT_require(BINARY_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBinaryOp() function since it has been problematic
     ASSERT_not_null(isSgBinaryOp(this));
   }

// Generated constructor (all data members)

/* #line 8529 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgArrowExp::SgArrowExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgArrowExp::SgArrowExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(POINTST_OP == this->variant());
     ASSERT_require(POINTST_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgArrowExp() function since it has been problematic
     ASSERT_not_null(isSgArrowExp(this));
   }

// Generated constructor (all data members)

/* #line 8554 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDotExp::SgDotExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDotExp::SgDotExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(RECORD_REF == this->variant());
     ASSERT_require(RECORD_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDotExp() function since it has been problematic
     ASSERT_not_null(isSgDotExp(this));
   }

// Generated constructor (all data members)

/* #line 8579 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDotStarOp::SgDotStarOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDotStarOp::SgDotStarOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DOTSTAR_OP == this->variant());
     ASSERT_require(DOTSTAR_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDotStarOp() function since it has been problematic
     ASSERT_not_null(isSgDotStarOp(this));
   }

// Generated constructor (all data members)

/* #line 8604 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgArrowStarOp::SgArrowStarOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgArrowStarOp::SgArrowStarOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ARROWSTAR_OP == this->variant());
     ASSERT_require(ARROWSTAR_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgArrowStarOp() function since it has been problematic
     ASSERT_not_null(isSgArrowStarOp(this));
   }

// Generated constructor (all data members)

/* #line 8629 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEqualityOp::SgEqualityOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgEqualityOp::SgEqualityOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EQ_OP == this->variant());
     ASSERT_require(EQ_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEqualityOp() function since it has been problematic
     ASSERT_not_null(isSgEqualityOp(this));
   }

// Generated constructor (all data members)

/* #line 8654 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLessThanOp::SgLessThanOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLessThanOp::SgLessThanOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LT_OP == this->variant());
     ASSERT_require(LT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLessThanOp() function since it has been problematic
     ASSERT_not_null(isSgLessThanOp(this));
   }

// Generated constructor (all data members)

/* #line 8679 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGreaterThanOp::SgGreaterThanOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgGreaterThanOp::SgGreaterThanOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(GT_OP == this->variant());
     ASSERT_require(GT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgGreaterThanOp() function since it has been problematic
     ASSERT_not_null(isSgGreaterThanOp(this));
   }

// Generated constructor (all data members)

/* #line 8704 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNotEqualOp::SgNotEqualOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgNotEqualOp::SgNotEqualOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NE_OP == this->variant());
     ASSERT_require(NE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNotEqualOp() function since it has been problematic
     ASSERT_not_null(isSgNotEqualOp(this));
   }

// Generated constructor (all data members)

/* #line 8729 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLessOrEqualOp::SgLessOrEqualOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLessOrEqualOp::SgLessOrEqualOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LE_OP == this->variant());
     ASSERT_require(LE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLessOrEqualOp() function since it has been problematic
     ASSERT_not_null(isSgLessOrEqualOp(this));
   }

// Generated constructor (all data members)

/* #line 8754 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGreaterOrEqualOp::SgGreaterOrEqualOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgGreaterOrEqualOp::SgGreaterOrEqualOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(GE_OP == this->variant());
     ASSERT_require(GE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgGreaterOrEqualOp() function since it has been problematic
     ASSERT_not_null(isSgGreaterOrEqualOp(this));
   }

// Generated constructor (all data members)

/* #line 8779 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAddOp::SgAddOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAddOp::SgAddOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ADD_OP == this->variant());
     ASSERT_require(ADD_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAddOp() function since it has been problematic
     ASSERT_not_null(isSgAddOp(this));
   }

// Generated constructor (all data members)

/* #line 8804 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSubtractOp::SgSubtractOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgSubtractOp::SgSubtractOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(SUBT_OP == this->variant());
     ASSERT_require(SUBT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSubtractOp() function since it has been problematic
     ASSERT_not_null(isSgSubtractOp(this));
   }

// Generated constructor (all data members)

/* #line 8829 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMultiplyOp::SgMultiplyOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMultiplyOp::SgMultiplyOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MULT_OP == this->variant());
     ASSERT_require(MULT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMultiplyOp() function since it has been problematic
     ASSERT_not_null(isSgMultiplyOp(this));
   }

// Generated constructor (all data members)

/* #line 8854 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDivideOp::SgDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDivideOp::SgDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DIV_OP == this->variant());
     ASSERT_require(DIV_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDivideOp() function since it has been problematic
     ASSERT_not_null(isSgDivideOp(this));
   }

// Generated constructor (all data members)

/* #line 8879 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIntegerDivideOp::SgIntegerDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIntegerDivideOp::SgIntegerDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(INTEGER_DIV_OP == this->variant());
     ASSERT_require(INTEGER_DIV_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIntegerDivideOp() function since it has been problematic
     ASSERT_not_null(isSgIntegerDivideOp(this));
   }

// Generated constructor (all data members)

/* #line 8904 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgModOp::SgModOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgModOp::SgModOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MOD_OP == this->variant());
     ASSERT_require(MOD_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgModOp() function since it has been problematic
     ASSERT_not_null(isSgModOp(this));
   }

// Generated constructor (all data members)

/* #line 8929 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAndOp::SgAndOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAndOp::SgAndOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AND_OP == this->variant());
     ASSERT_require(AND_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAndOp() function since it has been problematic
     ASSERT_not_null(isSgAndOp(this));
   }

// Generated constructor (all data members)

/* #line 8954 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOrOp::SgOrOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgOrOp::SgOrOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(OR_OP == this->variant());
     ASSERT_require(OR_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgOrOp() function since it has been problematic
     ASSERT_not_null(isSgOrOp(this));
   }

// Generated constructor (all data members)

/* #line 8979 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitXorOp::SgBitXorOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitXorOp::SgBitXorOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(BITXOR_OP == this->variant());
     ASSERT_require(BITXOR_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBitXorOp() function since it has been problematic
     ASSERT_not_null(isSgBitXorOp(this));
   }

// Generated constructor (all data members)

/* #line 9004 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitAndOp::SgBitAndOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitAndOp::SgBitAndOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(BITAND_OP == this->variant());
     ASSERT_require(BITAND_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBitAndOp() function since it has been problematic
     ASSERT_not_null(isSgBitAndOp(this));
   }

// Generated constructor (all data members)

/* #line 9029 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitOrOp::SgBitOrOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitOrOp::SgBitOrOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(BITOR_OP == this->variant());
     ASSERT_require(BITOR_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBitOrOp() function since it has been problematic
     ASSERT_not_null(isSgBitOrOp(this));
   }

// Generated constructor (all data members)

/* #line 9054 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitEqvOp::SgBitEqvOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitEqvOp::SgBitEqvOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(BITEQV_OP == this->variant());
     ASSERT_require(BITEQV_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBitEqvOp() function since it has been problematic
     ASSERT_not_null(isSgBitEqvOp(this));
   }

// Generated constructor (all data members)

/* #line 9079 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCommaOpExp::SgCommaOpExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCommaOpExp::SgCommaOpExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(COMMA_OP == this->variant());
     ASSERT_require(COMMA_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCommaOpExp() function since it has been problematic
     ASSERT_not_null(isSgCommaOpExp(this));
   }

// Generated constructor (all data members)

/* #line 9104 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLshiftOp::SgLshiftOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLshiftOp::SgLshiftOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LSHIFT_OP == this->variant());
     ASSERT_require(LSHIFT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLshiftOp() function since it has been problematic
     ASSERT_not_null(isSgLshiftOp(this));
   }

// Generated constructor (all data members)

/* #line 9129 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRshiftOp::SgRshiftOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRshiftOp::SgRshiftOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(RSHIFT_OP == this->variant());
     ASSERT_require(RSHIFT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRshiftOp() function since it has been problematic
     ASSERT_not_null(isSgRshiftOp(this));
   }

// Generated constructor (all data members)

/* #line 9154 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPntrArrRefExp::SgPntrArrRefExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPntrArrRefExp::SgPntrArrRefExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ARRAY_OP == this->variant());
     ASSERT_require(ARRAY_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPntrArrRefExp() function since it has been problematic
     ASSERT_not_null(isSgPntrArrRefExp(this));
   }

// Generated constructor (all data members)

/* #line 9179 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgScopeOp::SgScopeOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgScopeOp::SgScopeOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(SCOPE_OP == this->variant());
     ASSERT_require(SCOPE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgScopeOp() function since it has been problematic
     ASSERT_not_null(isSgScopeOp(this));
   }

// Generated constructor (all data members)

/* #line 9204 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignOp::SgAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAssignOp::SgAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ASSIGN_OP == this->variant());
     ASSERT_require(ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAssignOp() function since it has been problematic
     ASSERT_not_null(isSgAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9229 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExponentiationOp::SgExponentiationOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgExponentiationOp::SgExponentiationOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EXPONENTIATION_OP == this->variant());
     ASSERT_require(EXPONENTIATION_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExponentiationOp() function since it has been problematic
     ASSERT_not_null(isSgExponentiationOp(this));
   }

// Generated constructor (all data members)

/* #line 9254 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaUnsignedRshiftOp::SgJavaUnsignedRshiftOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaUnsignedRshiftOp::SgJavaUnsignedRshiftOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(JAVA_UNSIGNED_RSHIFT_OP == this->variant());
     ASSERT_require(JAVA_UNSIGNED_RSHIFT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaUnsignedRshiftOp() function since it has been problematic
     ASSERT_not_null(isSgJavaUnsignedRshiftOp(this));
   }

// Generated constructor (all data members)

/* #line 9279 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConcatenationOp::SgConcatenationOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgConcatenationOp::SgConcatenationOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(CONCATENATION_OP == this->variant());
     ASSERT_require(CONCATENATION_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgConcatenationOp() function since it has been problematic
     ASSERT_not_null(isSgConcatenationOp(this));
   }

// Generated constructor (all data members)

/* #line 9304 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPointerAssignOp::SgPointerAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPointerAssignOp::SgPointerAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(POINTER_ASSIGN_OP == this->variant());
     ASSERT_require(POINTER_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPointerAssignOp() function since it has been problematic
     ASSERT_not_null(isSgPointerAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9329 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUserDefinedBinaryOp::SgUserDefinedBinaryOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgUserDefinedBinaryOp::SgUserDefinedBinaryOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operator_name = operator_name;
     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(USER_DEFINED_BINARY_OP == this->variant());
     ASSERT_require(USER_DEFINED_BINARY_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUserDefinedBinaryOp() function since it has been problematic
     ASSERT_not_null(isSgUserDefinedBinaryOp(this));
   }

// Generated constructor (all data members)

/* #line 9357 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCompoundAssignOp::SgCompoundAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCompoundAssignOp::SgCompoundAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(COMPOUND_ASSIGN_OP == this->variant());
     ASSERT_require(COMPOUND_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCompoundAssignOp() function since it has been problematic
     ASSERT_not_null(isSgCompoundAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9382 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPlusAssignOp::SgPlusAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPlusAssignOp::SgPlusAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(PLUS_ASSIGN_OP == this->variant());
     ASSERT_require(PLUS_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPlusAssignOp() function since it has been problematic
     ASSERT_not_null(isSgPlusAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9407 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMinusAssignOp::SgMinusAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMinusAssignOp::SgMinusAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MINUS_ASSIGN_OP == this->variant());
     ASSERT_require(MINUS_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMinusAssignOp() function since it has been problematic
     ASSERT_not_null(isSgMinusAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9432 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAndAssignOp::SgAndAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAndAssignOp::SgAndAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AND_ASSIGN_OP == this->variant());
     ASSERT_require(AND_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAndAssignOp() function since it has been problematic
     ASSERT_not_null(isSgAndAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9457 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIorAssignOp::SgIorAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIorAssignOp::SgIorAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IOR_ASSIGN_OP == this->variant());
     ASSERT_require(IOR_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIorAssignOp() function since it has been problematic
     ASSERT_not_null(isSgIorAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9482 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMultAssignOp::SgMultAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMultAssignOp::SgMultAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MULT_ASSIGN_OP == this->variant());
     ASSERT_require(MULT_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMultAssignOp() function since it has been problematic
     ASSERT_not_null(isSgMultAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9507 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDivAssignOp::SgDivAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDivAssignOp::SgDivAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DIV_ASSIGN_OP == this->variant());
     ASSERT_require(DIV_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDivAssignOp() function since it has been problematic
     ASSERT_not_null(isSgDivAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9532 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgModAssignOp::SgModAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgModAssignOp::SgModAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MOD_ASSIGN_OP == this->variant());
     ASSERT_require(MOD_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgModAssignOp() function since it has been problematic
     ASSERT_not_null(isSgModAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9557 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgXorAssignOp::SgXorAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgXorAssignOp::SgXorAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(XOR_ASSIGN_OP == this->variant());
     ASSERT_require(XOR_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgXorAssignOp() function since it has been problematic
     ASSERT_not_null(isSgXorAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9582 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLshiftAssignOp::SgLshiftAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLshiftAssignOp::SgLshiftAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LSHIFT_ASSIGN_OP == this->variant());
     ASSERT_require(LSHIFT_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLshiftAssignOp() function since it has been problematic
     ASSERT_not_null(isSgLshiftAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9607 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRshiftAssignOp::SgRshiftAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRshiftAssignOp::SgRshiftAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(RSHIFT_ASSIGN_OP == this->variant());
     ASSERT_require(RSHIFT_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRshiftAssignOp() function since it has been problematic
     ASSERT_not_null(isSgRshiftAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9632 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaUnsignedRshiftAssignOp::SgJavaUnsignedRshiftAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaUnsignedRshiftAssignOp::SgJavaUnsignedRshiftAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(JAVA_UNSIGNED_RSHIFT_ASSIGN_OP == this->variant());
     ASSERT_require(JAVA_UNSIGNED_RSHIFT_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaUnsignedRshiftAssignOp() function since it has been problematic
     ASSERT_not_null(isSgJavaUnsignedRshiftAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9657 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIntegerDivideAssignOp::SgIntegerDivideAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIntegerDivideAssignOp::SgIntegerDivideAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IDIV_ASSIGN_OP == this->variant());
     ASSERT_require(IDIV_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIntegerDivideAssignOp() function since it has been problematic
     ASSERT_not_null(isSgIntegerDivideAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9682 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExponentiationAssignOp::SgExponentiationAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgExponentiationAssignOp::SgExponentiationAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EXP_ASSIGN_OP == this->variant());
     ASSERT_require(EXP_ASSIGN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExponentiationAssignOp() function since it has been problematic
     ASSERT_not_null(isSgExponentiationAssignOp(this));
   }

// Generated constructor (all data members)

/* #line 9707 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMembershipOp::SgMembershipOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMembershipOp::SgMembershipOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MEMBERSHIP_OP == this->variant());
     ASSERT_require(MEMBERSHIP_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMembershipOp() function since it has been problematic
     ASSERT_not_null(isSgMembershipOp(this));
   }

// Generated constructor (all data members)

/* #line 9732 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSpaceshipOp::SgSpaceshipOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgSpaceshipOp::SgSpaceshipOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(SPACESHIP_OP == this->variant());
     ASSERT_require(SPACESHIP_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSpaceshipOp() function since it has been problematic
     ASSERT_not_null(isSgSpaceshipOp(this));
   }

// Generated constructor (all data members)

/* #line 9757 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNonMembershipOp::SgNonMembershipOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgNonMembershipOp::SgNonMembershipOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NON_MEMBERSHIP_OP == this->variant());
     ASSERT_require(NON_MEMBERSHIP_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNonMembershipOp() function since it has been problematic
     ASSERT_not_null(isSgNonMembershipOp(this));
   }

// Generated constructor (all data members)

/* #line 9782 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIsOp::SgIsOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIsOp::SgIsOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IS_OP == this->variant());
     ASSERT_require(IS_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIsOp() function since it has been problematic
     ASSERT_not_null(isSgIsOp(this));
   }

// Generated constructor (all data members)

/* #line 9807 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIsNotOp::SgIsNotOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIsNotOp::SgIsNotOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(IS_NOT_OP == this->variant());
     ASSERT_require(IS_NOT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIsNotOp() function since it has been problematic
     ASSERT_not_null(isSgIsNotOp(this));
   }

// Generated constructor (all data members)

/* #line 9832 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDotDotExp::SgDotDotExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDotDotExp::SgDotDotExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DOTDOT_NODE == this->variant());
     ASSERT_require(DOTDOT_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDotDotExp() function since it has been problematic
     ASSERT_not_null(isSgDotDotExp(this));
   }

// Generated constructor (all data members)

/* #line 9857 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwiseOp::SgElementwiseOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwiseOp::SgElementwiseOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_WISE_OP == this->variant());
     ASSERT_require(ELEMENT_WISE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwiseOp() function since it has been problematic
     ASSERT_not_null(isSgElementwiseOp(this));
   }

// Generated constructor (all data members)

/* #line 9882 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwiseMultiplyOp::SgElementwiseMultiplyOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgElementwiseOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwiseMultiplyOp::SgElementwiseMultiplyOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_MULT_OP == this->variant());
     ASSERT_require(ELEMENT_MULT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwiseMultiplyOp() function since it has been problematic
     ASSERT_not_null(isSgElementwiseMultiplyOp(this));
   }

// Generated constructor (all data members)

/* #line 9907 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwisePowerOp::SgElementwisePowerOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgElementwiseOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwisePowerOp::SgElementwisePowerOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_POWER_OP == this->variant());
     ASSERT_require(ELEMENT_POWER_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwisePowerOp() function since it has been problematic
     ASSERT_not_null(isSgElementwisePowerOp(this));
   }

// Generated constructor (all data members)

/* #line 9932 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwiseLeftDivideOp::SgElementwiseLeftDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgElementwiseOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwiseLeftDivideOp::SgElementwiseLeftDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_LEFT_DIVIDE_OP == this->variant());
     ASSERT_require(ELEMENT_LEFT_DIVIDE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwiseLeftDivideOp() function since it has been problematic
     ASSERT_not_null(isSgElementwiseLeftDivideOp(this));
   }

// Generated constructor (all data members)

/* #line 9957 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwiseDivideOp::SgElementwiseDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgElementwiseOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwiseDivideOp::SgElementwiseDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_DIVIDE_OP == this->variant());
     ASSERT_require(ELEMENT_DIVIDE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwiseDivideOp() function since it has been problematic
     ASSERT_not_null(isSgElementwiseDivideOp(this));
   }

// Generated constructor (all data members)

/* #line 9982 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwiseAddOp::SgElementwiseAddOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgElementwiseOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwiseAddOp::SgElementwiseAddOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_ADD_OP == this->variant());
     ASSERT_require(ELEMENT_ADD_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwiseAddOp() function since it has been problematic
     ASSERT_not_null(isSgElementwiseAddOp(this));
   }

// Generated constructor (all data members)

/* #line 10007 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElementwiseSubtractOp::SgElementwiseSubtractOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgElementwiseOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgElementwiseSubtractOp::SgElementwiseSubtractOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ELEMENT_SUBTRACT_OP == this->variant());
     ASSERT_require(ELEMENT_SUBTRACT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgElementwiseSubtractOp() function since it has been problematic
     ASSERT_not_null(isSgElementwiseSubtractOp(this));
   }

// Generated constructor (all data members)

/* #line 10032 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPowerOp::SgPowerOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPowerOp::SgPowerOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(POWER_OP == this->variant());
     ASSERT_require(POWER_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPowerOp() function since it has been problematic
     ASSERT_not_null(isSgPowerOp(this));
   }

// Generated constructor (all data members)

/* #line 10057 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLeftDivideOp::SgLeftDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLeftDivideOp::SgLeftDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LEFT_DIVIDE_OP == this->variant());
     ASSERT_require(LEFT_DIVIDE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLeftDivideOp() function since it has been problematic
     ASSERT_not_null(isSgLeftDivideOp(this));
   }

// Generated constructor (all data members)

/* #line 10082 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRemOp::SgRemOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRemOp::SgRemOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(REM_OP == this->variant());
     ASSERT_require(REM_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRemOp() function since it has been problematic
     ASSERT_not_null(isSgRemOp(this));
   }

// Generated constructor (all data members)

/* #line 10107 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgReplicationOp::SgReplicationOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgReplicationOp::SgReplicationOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(REPLICATION_OP == this->variant());
     ASSERT_require(REPLICATION_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgReplicationOp() function since it has been problematic
     ASSERT_not_null(isSgReplicationOp(this));
   }

// Generated constructor (all data members)

/* #line 10132 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAtOp::SgAtOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAtOp::SgAtOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(AT_OP == this->variant());
     ASSERT_require(AT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAtOp() function since it has been problematic
     ASSERT_not_null(isSgAtOp(this));
   }

// Generated constructor (all data members)

/* #line 10157 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExprListExp::SgExprListExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgExprListExp::SgExprListExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(EXPR_LIST == this->variant());
     ASSERT_require(EXPR_LIST == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgExprListExp() function since it has been problematic
     ASSERT_not_null(isSgExprListExp(this));
   }

// Generated constructor (all data members)

/* #line 10182 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgListExp::SgListExp (  )
   : SgExprListExp()
   {
#ifdef DEBUG
  // printf ("In SgListExp::SgListExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(LIST_EXP == this->variant());
     ASSERT_require(LIST_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgListExp() function since it has been problematic
     ASSERT_not_null(isSgListExp(this));
   }

// Generated constructor (all data members)

/* #line 10207 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTupleExp::SgTupleExp (  )
   : SgExprListExp()
   {
#ifdef DEBUG
  // printf ("In SgTupleExp::SgTupleExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TUPLE_EXP == this->variant());
     ASSERT_require(TUPLE_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTupleExp() function since it has been problematic
     ASSERT_not_null(isSgTupleExp(this));
   }

// Generated constructor (all data members)

/* #line 10232 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMatrixExp::SgMatrixExp (  )
   : SgExprListExp()
   {
#ifdef DEBUG
  // printf ("In SgMatrixExp::SgMatrixExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MATRIX_EXP == this->variant());
     ASSERT_require(MATRIX_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMatrixExp() function since it has been problematic
     ASSERT_not_null(isSgMatrixExp(this));
   }

// Generated constructor (all data members)

/* #line 10257 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgValueExp::SgValueExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgValueExp::SgValueExp () sage_class_name() = %s \n",sage_class_name());
#endif

     p_originalExpressionTree = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ValueExpTag == this->variant());
     ASSERT_require(ValueExpTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgValueExp() function since it has been problematic
     ASSERT_not_null(isSgValueExp(this));
   }

// Generated constructor (all data members)

/* #line 10284 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBoolValExp::SgBoolValExp ( int value )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgBoolValExp::SgBoolValExp (int value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(BOOL_VAL == this->variant());
     ASSERT_require(BOOL_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBoolValExp() function since it has been problematic
     ASSERT_not_null(isSgBoolValExp(this));
   }

// Generated constructor (all data members)

/* #line 10311 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStringVal::SgStringVal ( std::string value )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgStringVal::SgStringVal (std::string value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_wcharString = false;
     p_stringDelimiter = 0;
     p_is16bitString = false;
     p_is32bitString = false;
     p_isRawString = false;
     p_raw_string_value = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(STRING_VAL == this->variant());
     ASSERT_require(STRING_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStringVal() function since it has been problematic
     ASSERT_not_null(isSgStringVal(this));
   }

// Generated constructor (all data members)

/* #line 10344 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgShortVal::SgShortVal ( short value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgShortVal::SgShortVal (short value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SHORT_VAL == this->variant());
     ASSERT_require(SHORT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgShortVal() function since it has been problematic
     ASSERT_not_null(isSgShortVal(this));
   }

// Generated constructor (all data members)

/* #line 10372 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCharVal::SgCharVal ( char value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgCharVal::SgCharVal (char value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CHAR_VAL == this->variant());
     ASSERT_require(CHAR_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCharVal() function since it has been problematic
     ASSERT_not_null(isSgCharVal(this));
   }

// Generated constructor (all data members)

/* #line 10400 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedCharVal::SgUnsignedCharVal ( unsigned char value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedCharVal::SgUnsignedCharVal (unsigned char value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNSIGNED_CHAR_VAL == this->variant());
     ASSERT_require(UNSIGNED_CHAR_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnsignedCharVal() function since it has been problematic
     ASSERT_not_null(isSgUnsignedCharVal(this));
   }

// Generated constructor (all data members)

/* #line 10428 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWcharVal::SgWcharVal ( unsigned long valueUL, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgWcharVal::SgWcharVal (unsigned long valueUL, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_valueUL = valueUL;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(WCHAR_VAL == this->variant());
     ASSERT_require(WCHAR_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgWcharVal() function since it has been problematic
     ASSERT_not_null(isSgWcharVal(this));
   }

// Generated constructor (all data members)

/* #line 10456 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedShortVal::SgUnsignedShortVal ( unsigned short value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedShortVal::SgUnsignedShortVal (unsigned short value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNSIGNED_SHORT_VAL == this->variant());
     ASSERT_require(UNSIGNED_SHORT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnsignedShortVal() function since it has been problematic
     ASSERT_not_null(isSgUnsignedShortVal(this));
   }

// Generated constructor (all data members)

/* #line 10484 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIntVal::SgIntVal ( int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgIntVal::SgIntVal (int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(INT_VAL == this->variant());
     ASSERT_require(INT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIntVal() function since it has been problematic
     ASSERT_not_null(isSgIntVal(this));
   }

// Generated constructor (all data members)

/* #line 10512 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEnumVal::SgEnumVal ( long long int value, SgEnumDeclaration* declaration, SgName name )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgEnumVal::SgEnumVal (long long int value, SgEnumDeclaration* declaration, SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_declaration = declaration;
     p_name = name;
     p_requiresNameQualification = false;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ENUM_VAL == this->variant());
     ASSERT_require(ENUM_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgEnumVal() function since it has been problematic
     ASSERT_not_null(isSgEnumVal(this));
   }

// Generated constructor (all data members)

/* #line 10545 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedIntVal::SgUnsignedIntVal ( unsigned int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedIntVal::SgUnsignedIntVal (unsigned int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNSIGNED_INT_VAL == this->variant());
     ASSERT_require(UNSIGNED_INT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnsignedIntVal() function since it has been problematic
     ASSERT_not_null(isSgUnsignedIntVal(this));
   }

// Generated constructor (all data members)

/* #line 10573 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLongIntVal::SgLongIntVal ( long int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgLongIntVal::SgLongIntVal (long int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LONG_INT_VAL == this->variant());
     ASSERT_require(LONG_INT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLongIntVal() function since it has been problematic
     ASSERT_not_null(isSgLongIntVal(this));
   }

// Generated constructor (all data members)

/* #line 10601 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLongLongIntVal::SgLongLongIntVal ( long long int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgLongLongIntVal::SgLongLongIntVal (long long int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LONG_LONG_INT_VAL == this->variant());
     ASSERT_require(LONG_LONG_INT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLongLongIntVal() function since it has been problematic
     ASSERT_not_null(isSgLongLongIntVal(this));
   }

// Generated constructor (all data members)

/* #line 10629 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedLongLongIntVal::SgUnsignedLongLongIntVal ( unsigned long long int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedLongLongIntVal::SgUnsignedLongLongIntVal (unsigned long long int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNSIGNED_LONG_LONG_INT_VAL == this->variant());
     ASSERT_require(UNSIGNED_LONG_LONG_INT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnsignedLongLongIntVal() function since it has been problematic
     ASSERT_not_null(isSgUnsignedLongLongIntVal(this));
   }

// Generated constructor (all data members)

/* #line 10657 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedLongVal::SgUnsignedLongVal ( unsigned long value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedLongVal::SgUnsignedLongVal (unsigned long value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UNSIGNED_LONG_INT_VAL == this->variant());
     ASSERT_require(UNSIGNED_LONG_INT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnsignedLongVal() function since it has been problematic
     ASSERT_not_null(isSgUnsignedLongVal(this));
   }

// Generated constructor (all data members)

/* #line 10685 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFloatVal::SgFloatVal ( float value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgFloatVal::SgFloatVal (float value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FLOAT_VAL == this->variant());
     ASSERT_require(FLOAT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFloatVal() function since it has been problematic
     ASSERT_not_null(isSgFloatVal(this));
   }

// Generated constructor (all data members)

/* #line 10713 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDoubleVal::SgDoubleVal ( double value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgDoubleVal::SgDoubleVal (double value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DOUBLE_VAL == this->variant());
     ASSERT_require(DOUBLE_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDoubleVal() function since it has been problematic
     ASSERT_not_null(isSgDoubleVal(this));
   }

// Generated constructor (all data members)

/* #line 10741 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLongDoubleVal::SgLongDoubleVal ( long double value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgLongDoubleVal::SgLongDoubleVal (long double value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LONG_DOUBLE_VAL == this->variant());
     ASSERT_require(LONG_DOUBLE_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLongDoubleVal() function since it has been problematic
     ASSERT_not_null(isSgLongDoubleVal(this));
   }

// Generated constructor (all data members)

/* #line 10769 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgComplexVal::SgComplexVal ( SgValueExp* real_value, SgValueExp* imaginary_value, SgType* precisionType, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgComplexVal::SgComplexVal (SgValueExp* real_value, SgValueExp* imaginary_value, SgType* precisionType, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_real_value = real_value;
     p_imaginary_value = imaginary_value;
     p_precisionType = precisionType;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(COMPLEX_VAL == this->variant());
     ASSERT_require(COMPLEX_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgComplexVal() function since it has been problematic
     ASSERT_not_null(isSgComplexVal(this));
   }

// Generated constructor (all data members)

/* #line 10799 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcThreads::SgUpcThreads ( int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUpcThreads::SgUpcThreads (int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_THREADS == this->variant());
     ASSERT_require(UPC_THREADS == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcThreads() function since it has been problematic
     ASSERT_not_null(isSgUpcThreads(this));
   }

// Generated constructor (all data members)

/* #line 10827 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcMythread::SgUpcMythread ( int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUpcMythread::SgUpcMythread (int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_MYTHREAD == this->variant());
     ASSERT_require(UPC_MYTHREAD == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcMythread() function since it has been problematic
     ASSERT_not_null(isSgUpcMythread(this));
   }

// Generated constructor (all data members)

/* #line 10855 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateParameterVal::SgTemplateParameterVal ( int template_parameter_position, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgTemplateParameterVal::SgTemplateParameterVal (int template_parameter_position, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_template_parameter_position = template_parameter_position;
     p_valueString = valueString;
     p_valueType = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_PARAMETER_VAL == this->variant());
     ASSERT_require(TEMPLATE_PARAMETER_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateParameterVal() function since it has been problematic
     ASSERT_not_null(isSgTemplateParameterVal(this));
   }

// Generated constructor (all data members)

/* #line 10884 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullptrValExp::SgNullptrValExp (  )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgNullptrValExp::SgNullptrValExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NULLPTR_VAL == this->variant());
     ASSERT_require(NULLPTR_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNullptrValExp() function since it has been problematic
     ASSERT_not_null(isSgNullptrValExp(this));
   }

// Generated constructor (all data members)

/* #line 10909 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgChar16Val::SgChar16Val ( unsigned short valueUL, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgChar16Val::SgChar16Val (unsigned short valueUL, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_valueUL = valueUL;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CHAR16_VAL == this->variant());
     ASSERT_require(CHAR16_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgChar16Val() function since it has been problematic
     ASSERT_not_null(isSgChar16Val(this));
   }

// Generated constructor (all data members)

/* #line 10937 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgChar32Val::SgChar32Val ( unsigned int valueUL, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgChar32Val::SgChar32Val (unsigned int valueUL, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_valueUL = valueUL;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CHAR32_VAL == this->variant());
     ASSERT_require(CHAR32_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgChar32Val() function since it has been problematic
     ASSERT_not_null(isSgChar32Val(this));
   }

// Generated constructor (all data members)

/* #line 10965 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFloat80Val::SgFloat80Val ( long double value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgFloat80Val::SgFloat80Val (long double value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FLOAT_80_VAL == this->variant());
     ASSERT_require(FLOAT_80_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFloat80Val() function since it has been problematic
     ASSERT_not_null(isSgFloat80Val(this));
   }

// Generated constructor (all data members)

/* #line 10993 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFloat128Val::SgFloat128Val ( long double value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgFloat128Val::SgFloat128Val (long double value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FLOAT_128_VAL == this->variant());
     ASSERT_require(FLOAT_128_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFloat128Val() function since it has been problematic
     ASSERT_not_null(isSgFloat128Val(this));
   }

// Generated constructor (all data members)

/* #line 11021 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVoidVal::SgVoidVal (  )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgVoidVal::SgVoidVal () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(VOID_VAL == this->variant());
     ASSERT_require(VOID_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVoidVal() function since it has been problematic
     ASSERT_not_null(isSgVoidVal(this));
   }

// Generated constructor (all data members)

/* #line 11046 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaFloatVal::SgAdaFloatVal ( std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgAdaFloatVal::SgAdaFloatVal (std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_FLOAT_VAL == this->variant());
     ASSERT_require(ADA_FLOAT_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaFloatVal() function since it has been problematic
     ASSERT_not_null(isSgAdaFloatVal(this));
   }

// Generated constructor (all data members)

/* #line 11073 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSignedCharVal::SgSignedCharVal ( signed char value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgSignedCharVal::SgSignedCharVal (signed char value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SIGNED_CHAR_VAL == this->variant());
     ASSERT_require(SIGNED_CHAR_VAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSignedCharVal() function since it has been problematic
     ASSERT_not_null(isSgSignedCharVal(this));
   }

// Generated constructor (all data members)

/* #line 11101 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCallExpression::SgCallExpression ( SgExpression* function, SgExprListExp* args, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCallExpression::SgCallExpression (SgExpression* function, SgExprListExp* args, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function = function;
     p_args = args;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CALL_EXPRESSION == this->variant());
     ASSERT_require(CALL_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCallExpression() function since it has been problematic
     ASSERT_not_null(isSgCallExpression(this));
   }

// Generated constructor (all data members)

/* #line 11130 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionCallExp::SgFunctionCallExp ( SgExpression* function, SgExprListExp* args, SgType* expression_type )
   : SgCallExpression(function, args, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgFunctionCallExp::SgFunctionCallExp (SgExpression* function, SgExprListExp* args, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_uses_operator_syntax = false;
     p_usesObjectCallSyntax = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FUNC_CALL == this->variant());
     ASSERT_require(FUNC_CALL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionCallExp() function since it has been problematic
     ASSERT_not_null(isSgFunctionCallExp(this));
   }

// Generated constructor (all data members)

/* #line 11158 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCudaKernelCallExp::SgCudaKernelCallExp ( SgExpression* function, SgExprListExp* args, SgType* expression_type, SgCudaKernelExecConfig* exec_config )
   : SgFunctionCallExp(function, args, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCudaKernelCallExp::SgCudaKernelCallExp (SgExpression* function, SgExprListExp* args, SgType* expression_type, SgCudaKernelExecConfig* exec_config) sage_class_name() = %s \n",sage_class_name());
#endif

     p_exec_config = exec_config;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(KERN_CALL == this->variant());
     ASSERT_require(KERN_CALL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCudaKernelCallExp() function since it has been problematic
     ASSERT_not_null(isSgCudaKernelCallExp(this));
   }

// Generated constructor (all data members)

/* #line 11185 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcLocalsizeofExpression::SgUpcLocalsizeofExpression ( SgExpression* expression, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUpcLocalsizeofExpression::SgUpcLocalsizeofExpression (SgExpression* expression, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_LOCAL_SIZEOF_EXPR == this->variant());
     ASSERT_require(UPC_LOCAL_SIZEOF_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcLocalsizeofExpression() function since it has been problematic
     ASSERT_not_null(isSgUpcLocalsizeofExpression(this));
   }

// Generated constructor (all data members)

/* #line 11214 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcBlocksizeofExpression::SgUpcBlocksizeofExpression ( SgExpression* expression, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUpcBlocksizeofExpression::SgUpcBlocksizeofExpression (SgExpression* expression, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_BLOCK_SIZEOF_EXPR == this->variant());
     ASSERT_require(UPC_BLOCK_SIZEOF_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcBlocksizeofExpression() function since it has been problematic
     ASSERT_not_null(isSgUpcBlocksizeofExpression(this));
   }

// Generated constructor (all data members)

/* #line 11243 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcElemsizeofExpression::SgUpcElemsizeofExpression ( SgExpression* expression, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUpcElemsizeofExpression::SgUpcElemsizeofExpression (SgExpression* expression, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(UPC_ELEM_SIZEOF_EXPR == this->variant());
     ASSERT_require(UPC_ELEM_SIZEOF_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUpcElemsizeofExpression() function since it has been problematic
     ASSERT_not_null(isSgUpcElemsizeofExpression(this));
   }

// Generated constructor (all data members)

/* #line 11272 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaInstanceOfOp::SgJavaInstanceOfOp ( SgExpression* operand_expr, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgJavaInstanceOfOp::SgJavaInstanceOfOp (SgExpression* operand_expr, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_INSTANCEOF_OP == this->variant());
     ASSERT_require(JAVA_INSTANCEOF_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaInstanceOfOp() function since it has been problematic
     ASSERT_not_null(isSgJavaInstanceOfOp(this));
   }

// Generated constructor (all data members)

/* #line 11301 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSuperExp::SgSuperExp ( SgClassSymbol* class_symbol, int pobj_super )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSuperExp::SgSuperExp (SgClassSymbol* class_symbol, int pobj_super) sage_class_name() = %s \n",sage_class_name());
#endif

     p_class_symbol = class_symbol;
     p_pobj_super = pobj_super;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SUPER_NODE == this->variant());
     ASSERT_require(SUPER_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSuperExp() function since it has been problematic
     ASSERT_not_null(isSgSuperExp(this));
   }

// Generated constructor (all data members)

/* #line 11329 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypeIdOp::SgTypeIdOp ( SgExpression* operand_expr, SgType* operand_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgTypeIdOp::SgTypeIdOp (SgExpression* operand_expr, SgType* operand_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_name_qualification_for_pointer_to_member_class_length = 0;
     p_type_elaboration_for_pointer_to_member_class_required = false;
     p_global_qualification_for_pointer_to_member_class_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TYPEID_OP == this->variant());
     ASSERT_require(TYPEID_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTypeIdOp() function since it has been problematic
     ASSERT_not_null(isSgTypeIdOp(this));
   }

// Generated constructor (all data members)

/* #line 11363 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConditionalExp::SgConditionalExp ( SgExpression* conditional_exp, SgExpression* true_exp, SgExpression* false_exp, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgConditionalExp::SgConditionalExp (SgExpression* conditional_exp, SgExpression* true_exp, SgExpression* false_exp, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_conditional_exp = conditional_exp;
     p_true_exp = true_exp;
     p_false_exp = false_exp;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(EXPR_CONDITIONAL == this->variant());
     ASSERT_require(EXPR_CONDITIONAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgConditionalExp() function since it has been problematic
     ASSERT_not_null(isSgConditionalExp(this));
   }

// Generated constructor (all data members)

/* #line 11393 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNewExp::SgNewExp ( SgType* specified_type, SgExprListExp* placement_args, SgConstructorInitializer* constructor_args, SgExpression* builtin_args, short need_global_specifier, SgFunctionDeclaration* newOperatorDeclaration )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNewExp::SgNewExp (SgType* specified_type, SgExprListExp* placement_args, SgConstructorInitializer* constructor_args, SgExpression* builtin_args, short need_global_specifier, SgFunctionDeclaration* newOperatorDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_specified_type = specified_type;
     p_placement_args = placement_args;
     p_constructor_args = constructor_args;
     p_builtin_args = builtin_args;
     p_need_global_specifier = need_global_specifier;
     p_newOperatorDeclaration = newOperatorDeclaration;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_name_qualification_for_pointer_to_member_class_length = 0;
     p_type_elaboration_for_pointer_to_member_class_required = false;
     p_global_qualification_for_pointer_to_member_class_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NEW_OP == this->variant());
     ASSERT_require(NEW_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNewExp() function since it has been problematic
     ASSERT_not_null(isSgNewExp(this));
   }

// Generated constructor (all data members)

/* #line 11431 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeleteExp::SgDeleteExp ( SgExpression* variable, short is_array, short need_global_specifier, SgFunctionDeclaration* deleteOperatorDeclaration )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgDeleteExp::SgDeleteExp (SgExpression* variable, short is_array, short need_global_specifier, SgFunctionDeclaration* deleteOperatorDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_variable = variable;
     p_is_array = is_array;
     p_need_global_specifier = need_global_specifier;
     p_deleteOperatorDeclaration = deleteOperatorDeclaration;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DELETE_OP == this->variant());
     ASSERT_require(DELETE_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDeleteExp() function since it has been problematic
     ASSERT_not_null(isSgDeleteExp(this));
   }

// Generated constructor (all data members)

/* #line 11461 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgThisExp::SgThisExp ( SgClassSymbol* class_symbol, SgNonrealSymbol* nonreal_symbol, int pobj_this )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgThisExp::SgThisExp (SgClassSymbol* class_symbol, SgNonrealSymbol* nonreal_symbol, int pobj_this) sage_class_name() = %s \n",sage_class_name());
#endif

     p_class_symbol = class_symbol;
     p_nonreal_symbol = nonreal_symbol;
     p_pobj_this = pobj_this;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(THIS_NODE == this->variant());
     ASSERT_require(THIS_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgThisExp() function since it has been problematic
     ASSERT_not_null(isSgThisExp(this));
   }

// Generated constructor (all data members)

/* #line 11490 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRefExp::SgRefExp ( SgType* type_name )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgRefExp::SgRefExp (SgType* type_name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_type_name = type_name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TYPE_REF == this->variant());
     ASSERT_require(TYPE_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRefExp() function since it has been problematic
     ASSERT_not_null(isSgRefExp(this));
   }

// Generated constructor (all data members)

/* #line 11517 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInitializer::SgInitializer (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgInitializer::SgInitializer () sage_class_name() = %s \n",sage_class_name());
#endif

     p_is_explicit_cast = true;
     p_is_braced_initialized = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(EXPR_INIT == this->variant());
     ASSERT_require(EXPR_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgInitializer() function since it has been problematic
     ASSERT_not_null(isSgInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11545 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAggregateInitializer::SgAggregateInitializer ( SgExprListExp* initializers, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgAggregateInitializer::SgAggregateInitializer (SgExprListExp* initializers, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initializers = initializers;
     p_expression_type = expression_type;
     p_need_explicit_braces = true;
     p_uses_compound_literal = false;
     p_requiresGlobalNameQualificationOnType = false;
     p_name_qualification_length_for_type = 0;
     p_type_elaboration_required_for_type = false;
     p_global_qualification_required_for_type = false;
     p_originalExpressionTree = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(AGGREGATE_INIT == this->variant());
     ASSERT_require(AGGREGATE_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAggregateInitializer() function since it has been problematic
     ASSERT_not_null(isSgAggregateInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11580 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCompoundInitializer::SgCompoundInitializer ( SgExprListExp* initializers, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgCompoundInitializer::SgCompoundInitializer (SgExprListExp* initializers, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initializers = initializers;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(COMPOUND_INIT == this->variant());
     ASSERT_require(COMPOUND_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCompoundInitializer() function since it has been problematic
     ASSERT_not_null(isSgCompoundInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11608 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConstructorInitializer::SgConstructorInitializer ( SgMemberFunctionDeclaration* declaration, SgExprListExp* args, SgType* expression_type, bool need_name, bool need_qualifier, bool need_parenthesis_after_name, bool associated_class_unknown )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgConstructorInitializer::SgConstructorInitializer (SgMemberFunctionDeclaration* declaration, SgExprListExp* args, SgType* expression_type, bool need_name, bool need_qualifier, bool need_parenthesis_after_name, bool associated_class_unknown) sage_class_name() = %s \n",sage_class_name());
#endif

     p_declaration = declaration;
     p_args = args;
     p_expression_type = expression_type;
     p_need_name = need_name;
     p_need_qualifier = need_qualifier;
     p_need_parenthesis_after_name = need_parenthesis_after_name;
     p_associated_class_unknown = associated_class_unknown;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_is_used_in_conditional = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CONSTRUCTOR_INIT == this->variant());
     ASSERT_require(CONSTRUCTOR_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgConstructorInitializer() function since it has been problematic
     ASSERT_not_null(isSgConstructorInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11645 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignInitializer::SgAssignInitializer ( SgExpression* operand_i, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgAssignInitializer::SgAssignInitializer (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_i = operand_i;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ASSIGN_INIT == this->variant());
     ASSERT_require(ASSIGN_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAssignInitializer() function since it has been problematic
     ASSERT_not_null(isSgAssignInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11673 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDesignatedInitializer::SgDesignatedInitializer ( SgExprListExp* designatorList, SgInitializer* memberInit )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgDesignatedInitializer::SgDesignatedInitializer (SgExprListExp* designatorList, SgInitializer* memberInit) sage_class_name() = %s \n",sage_class_name());
#endif

     p_designatorList = designatorList;
     p_memberInit = memberInit;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DESIGNATED_INITIALIZER == this->variant());
     ASSERT_require(DESIGNATED_INITIALIZER == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDesignatedInitializer() function since it has been problematic
     ASSERT_not_null(isSgDesignatedInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11701 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBracedInitializer::SgBracedInitializer ( SgExprListExp* initializers, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgBracedInitializer::SgBracedInitializer (SgExprListExp* initializers, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initializers = initializers;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(BRACED_INIT == this->variant());
     ASSERT_require(BRACED_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgBracedInitializer() function since it has been problematic
     ASSERT_not_null(isSgBracedInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11729 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaAncestorInitializer::SgAdaAncestorInitializer ( SgExpression* ancestor )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgAdaAncestorInitializer::SgAdaAncestorInitializer (SgExpression* ancestor) sage_class_name() = %s \n",sage_class_name());
#endif

     p_ancestor = ancestor;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_ANCESTOR_INIT == this->variant());
     ASSERT_require(ADA_ANCESTOR_INIT == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaAncestorInitializer() function since it has been problematic
     ASSERT_not_null(isSgAdaAncestorInitializer(this));
   }

// Generated constructor (all data members)

/* #line 11756 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgStartOp::SgVarArgStartOp ( SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgStartOp::SgVarArgStartOp (SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs_operand = lhs_operand;
     p_rhs_operand = rhs_operand;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VA_START_OP == this->variant());
     ASSERT_require(VA_START_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVarArgStartOp() function since it has been problematic
     ASSERT_not_null(isSgVarArgStartOp(this));
   }

// Generated constructor (all data members)

/* #line 11785 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgOp::SgVarArgOp ( SgExpression* operand_expr, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgOp::SgVarArgOp (SgExpression* operand_expr, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VA_OP == this->variant());
     ASSERT_require(VA_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVarArgOp() function since it has been problematic
     ASSERT_not_null(isSgVarArgOp(this));
   }

// Generated constructor (all data members)

/* #line 11813 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgEndOp::SgVarArgEndOp ( SgExpression* operand_expr, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgEndOp::SgVarArgEndOp (SgExpression* operand_expr, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VA_END_OP == this->variant());
     ASSERT_require(VA_END_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVarArgEndOp() function since it has been problematic
     ASSERT_not_null(isSgVarArgEndOp(this));
   }

// Generated constructor (all data members)

/* #line 11841 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgCopyOp::SgVarArgCopyOp ( SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgCopyOp::SgVarArgCopyOp (SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs_operand = lhs_operand;
     p_rhs_operand = rhs_operand;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VA_COPY_OP == this->variant());
     ASSERT_require(VA_COPY_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVarArgCopyOp() function since it has been problematic
     ASSERT_not_null(isSgVarArgCopyOp(this));
   }

// Generated constructor (all data members)

/* #line 11870 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgStartOneOperandOp::SgVarArgStartOneOperandOp ( SgExpression* operand_expr, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgStartOneOperandOp::SgVarArgStartOneOperandOp (SgExpression* operand_expr, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VA_START_ONE_OPERAND_OP == this->variant());
     ASSERT_require(VA_START_ONE_OPERAND_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVarArgStartOneOperandOp() function since it has been problematic
     ASSERT_not_null(isSgVarArgStartOneOperandOp(this));
   }

// Generated constructor (all data members)

/* #line 11898 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullExpression::SgNullExpression (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNullExpression::SgNullExpression () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NULL_EXPR == this->variant());
     ASSERT_require(NULL_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNullExpression() function since it has been problematic
     ASSERT_not_null(isSgNullExpression(this));
   }

// Generated constructor (all data members)

/* #line 11923 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariantExpression::SgVariantExpression (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVariantExpression::SgVariantExpression () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(VARIANT_EXPR == this->variant());
     ASSERT_require(VARIANT_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVariantExpression() function since it has been problematic
     ASSERT_not_null(isSgVariantExpression(this));
   }

// Generated constructor (all data members)

/* #line 11948 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSubscriptExpression::SgSubscriptExpression ( SgExpression* lowerBound, SgExpression* upperBound, SgExpression* stride )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSubscriptExpression::SgSubscriptExpression (SgExpression* lowerBound, SgExpression* upperBound, SgExpression* stride) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lowerBound = lowerBound;
     p_upperBound = upperBound;
     p_stride = stride;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SUBSCRIPT_EXPR == this->variant());
     ASSERT_require(SUBSCRIPT_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSubscriptExpression() function since it has been problematic
     ASSERT_not_null(isSgSubscriptExpression(this));
   }

// Generated constructor (all data members)

/* #line 11977 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgColonShapeExp::SgColonShapeExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgColonShapeExp::SgColonShapeExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_ColonShapeExp == this->variant());
     ASSERT_require(TEMP_ColonShapeExp == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgColonShapeExp() function since it has been problematic
     ASSERT_not_null(isSgColonShapeExp(this));
   }

// Generated constructor (all data members)

/* #line 12002 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsteriskShapeExp::SgAsteriskShapeExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAsteriskShapeExp::SgAsteriskShapeExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(TEMP_AsteriskShapeExp == this->variant());
     ASSERT_require(TEMP_AsteriskShapeExp == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAsteriskShapeExp() function since it has been problematic
     ASSERT_not_null(isSgAsteriskShapeExp(this));
   }

// Generated constructor (all data members)

/* #line 12027 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImpliedDo::SgImpliedDo ( SgExpression* do_var_initialization, SgExpression* last_val, SgExpression* increment, SgExprListExp* object_list, SgScopeStatement* implied_do_scope )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgImpliedDo::SgImpliedDo (SgExpression* do_var_initialization, SgExpression* last_val, SgExpression* increment, SgExprListExp* object_list, SgScopeStatement* implied_do_scope) sage_class_name() = %s \n",sage_class_name());
#endif

     p_do_var_initialization = do_var_initialization;
     p_last_val = last_val;
     p_increment = increment;
     p_object_list = object_list;
     p_implied_do_scope = implied_do_scope;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(IMPLIED_DO == this->variant());
     ASSERT_require(IMPLIED_DO == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgImpliedDo() function since it has been problematic
     ASSERT_not_null(isSgImpliedDo(this));
   }

// Generated constructor (all data members)

/* #line 12058 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIOItemExpression::SgIOItemExpression ( SgName name, SgExpression* io_item )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgIOItemExpression::SgIOItemExpression (SgName name, SgExpression* io_item) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_io_item = io_item;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(IO_ITEM_EXPR == this->variant());
     ASSERT_require(IO_ITEM_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgIOItemExpression() function since it has been problematic
     ASSERT_not_null(isSgIOItemExpression(this));
   }

// Generated constructor (all data members)

/* #line 12086 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgActualArgumentExpression::SgActualArgumentExpression ( SgName argument_name, SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgActualArgumentExpression::SgActualArgumentExpression (SgName argument_name, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_argument_name = argument_name;
     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ACTUAL_ARGUMENT_EXPRESSION == this->variant());
     ASSERT_require(ACTUAL_ARGUMENT_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgActualArgumentExpression() function since it has been problematic
     ASSERT_not_null(isSgActualArgumentExpression(this));
   }

// Generated constructor (all data members)

/* #line 12114 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStatementExpression::SgStatementExpression ( SgStatement* statement )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgStatementExpression::SgStatementExpression (SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_statement = statement;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(STMT_EXPR == this->variant());
     ASSERT_require(STMT_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStatementExpression() function since it has been problematic
     ASSERT_not_null(isSgStatementExpression(this));
   }

// Generated constructor (all data members)

/* #line 12141 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsmOp::SgAsmOp ( SgAsmOp::asm_operand_constraint_enum constraint, SgAsmOp::asm_operand_modifier_enum modifiers, SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAsmOp::SgAsmOp (SgAsmOp::asm_operand_constraint_enum constraint, SgAsmOp::asm_operand_modifier_enum modifiers, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_constraint = constraint;
     p_modifiers = modifiers;
     p_expression = expression;
     p_recordRawAsmOperandDescriptions = false;
     p_isOutputOperand = false;
     p_constraintString = "";
     p_name = "";

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ASM_OP == this->variant());
     ASSERT_require(ASM_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAsmOp() function since it has been problematic
     ASSERT_not_null(isSgAsmOp(this));
   }

// Generated constructor (all data members)

/* #line 12174 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCudaKernelExecConfig::SgCudaKernelExecConfig ( SgExpression* grid, SgExpression* blocks, SgExpression* shared, SgExpression* stream )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCudaKernelExecConfig::SgCudaKernelExecConfig (SgExpression* grid, SgExpression* blocks, SgExpression* shared, SgExpression* stream) sage_class_name() = %s \n",sage_class_name());
#endif

     p_grid = grid;
     p_blocks = blocks;
     p_shared = shared;
     p_stream = stream;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(EXEC_CONF == this->variant());
     ASSERT_require(EXEC_CONF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCudaKernelExecConfig() function since it has been problematic
     ASSERT_not_null(isSgCudaKernelExecConfig(this));
   }

// Generated constructor (all data members)

/* #line 12204 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnknownArrayOrFunctionReference::SgUnknownArrayOrFunctionReference (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUnknownArrayOrFunctionReference::SgUnknownArrayOrFunctionReference () sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = "";
     p_named_reference = NULL;
     p_expression_list = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMP_UnknownArrayOrFunctionReference == this->variant());
     ASSERT_require(TEMP_UnknownArrayOrFunctionReference == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgUnknownArrayOrFunctionReference() function since it has been problematic
     ASSERT_not_null(isSgUnknownArrayOrFunctionReference(this));
   }

// Generated constructor (all data members)

/* #line 12233 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPseudoDestructorRefExp::SgPseudoDestructorRefExp ( SgType* object_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgPseudoDestructorRefExp::SgPseudoDestructorRefExp (SgType* object_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_object_type = object_type;
     p_expression_type = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(PSEUDO_DESTRUCTOR_REF == this->variant());
     ASSERT_require(PSEUDO_DESTRUCTOR_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgPseudoDestructorRefExp() function since it has been problematic
     ASSERT_not_null(isSgPseudoDestructorRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12264 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCAFCoExpression::SgCAFCoExpression ( SgVarRefExp* teamId, SgExpression* teamRank, SgExpression* referData )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCAFCoExpression::SgCAFCoExpression (SgVarRefExp* teamId, SgExpression* teamRank, SgExpression* referData) sage_class_name() = %s \n",sage_class_name());
#endif

     p_teamId = teamId;
     p_teamRank = teamRank;
     p_referData = referData;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(COARRAY_REF_EXPR == this->variant());
     ASSERT_require(COARRAY_REF_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCAFCoExpression() function since it has been problematic
     ASSERT_not_null(isSgCAFCoExpression(this));
   }

// Generated constructor (all data members)

/* #line 12293 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSizeOfOp::SgSizeOfOp ( SgExpression* operand_expr, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSizeOfOp::SgSizeOfOp (SgExpression* operand_expr, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_expression_type = expression_type;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_sizeOfContainsBaseTypeDefiningDeclaration = false;
     p_is_objectless_nonstatic_data_member_reference = false;
     p_name_qualification_for_pointer_to_member_class_length = 0;
     p_type_elaboration_for_pointer_to_member_class_required = false;
     p_global_qualification_for_pointer_to_member_class_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SIZEOF_OP == this->variant());
     ASSERT_require(SIZEOF_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSizeOfOp() function since it has been problematic
     ASSERT_not_null(isSgSizeOfOp(this));
   }

// Generated constructor (all data members)

/* #line 12330 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLambdaRefExp::SgLambdaRefExp ( SgFunctionDeclaration* functionDeclaration )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgLambdaRefExp::SgLambdaRefExp (SgFunctionDeclaration* functionDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_functionDeclaration = functionDeclaration;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LAMBDA_REF_EXP == this->variant());
     ASSERT_require(LAMBDA_REF_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLambdaRefExp() function since it has been problematic
     ASSERT_not_null(isSgLambdaRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12357 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDictionaryExp::SgDictionaryExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgDictionaryExp::SgDictionaryExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(DICT_EXP == this->variant());
     ASSERT_require(DICT_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDictionaryExp() function since it has been problematic
     ASSERT_not_null(isSgDictionaryExp(this));
   }

// Generated constructor (all data members)

/* #line 12382 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgKeyDatumPair::SgKeyDatumPair ( SgExpression* key, SgExpression* datum )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgKeyDatumPair::SgKeyDatumPair (SgExpression* key, SgExpression* datum) sage_class_name() = %s \n",sage_class_name());
#endif

     p_key = key;
     p_datum = datum;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(KEY_DATUM_PAIR == this->variant());
     ASSERT_require(KEY_DATUM_PAIR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgKeyDatumPair() function since it has been problematic
     ASSERT_not_null(isSgKeyDatumPair(this));
   }

// Generated constructor (all data members)

/* #line 12410 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgReferenceExp::SgReferenceExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgReferenceExp::SgReferenceExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ReferenceExpTag == this->variant());
     ASSERT_require(ReferenceExpTag == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgReferenceExp() function since it has been problematic
     ASSERT_not_null(isSgReferenceExp(this));
   }

// Generated constructor (all data members)

/* #line 12435 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarRefExp::SgVarRefExp ( SgVariableSymbol* symbol )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgVarRefExp::SgVarRefExp (SgVariableSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;
     p_originalExpressionTree = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(VAR_REF == this->variant());
     ASSERT_require(VAR_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgVarRefExp() function since it has been problematic
     ASSERT_not_null(isSgVarRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12466 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLabelRefExp::SgLabelRefExp ( SgLabelSymbol* symbol )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgLabelRefExp::SgLabelRefExp (SgLabelSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LABEL_REF == this->variant());
     ASSERT_require(LABEL_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLabelRefExp() function since it has been problematic
     ASSERT_not_null(isSgLabelRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12493 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassNameRefExp::SgClassNameRefExp ( SgClassSymbol* symbol )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgClassNameRefExp::SgClassNameRefExp (SgClassSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CLASSNAME_REF == this->variant());
     ASSERT_require(CLASSNAME_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClassNameRefExp() function since it has been problematic
     ASSERT_not_null(isSgClassNameRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12520 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNonrealRefExp::SgNonrealRefExp ( SgNonrealSymbol* symbol )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgNonrealRefExp::SgNonrealRefExp (SgNonrealSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NONREAL_REF == this->variant());
     ASSERT_require(NONREAL_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNonrealRefExp() function since it has been problematic
     ASSERT_not_null(isSgNonrealRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12550 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgScopedRefExp::SgScopedRefExp ( SgReferenceExp *  lhs, SgReferenceExp *  rhs )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgScopedRefExp::SgScopedRefExp (SgReferenceExp *  lhs, SgReferenceExp *  rhs) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs = lhs;
     p_rhs = rhs;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SCOPED_REF == this->variant());
     ASSERT_require(SCOPED_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgScopedRefExp() function since it has been problematic
     ASSERT_not_null(isSgScopedRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12578 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypeRefExp::SgTypeRefExp ( SgNamedType *  named_type )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgTypeRefExp::SgTypeRefExp (SgNamedType *  named_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_named_type = named_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NTYPE_REF == this->variant());
     ASSERT_require(NTYPE_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTypeRefExp() function since it has been problematic
     ASSERT_not_null(isSgTypeRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12605 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionRefExp::SgFunctionRefExp ( SgFunctionSymbol* symbol_i, SgFunctionType* function_type )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgFunctionRefExp::SgFunctionRefExp (SgFunctionSymbol* symbol_i, SgFunctionType* function_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol_i = symbol_i;
     p_function_type = function_type;
     p_originalExpressionTree = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FUNCTION_REF == this->variant());
     ASSERT_require(FUNCTION_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionRefExp() function since it has been problematic
     ASSERT_not_null(isSgFunctionRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12637 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMemberFunctionRefExp::SgMemberFunctionRefExp ( SgMemberFunctionSymbol* symbol_i, int virtual_call, SgFunctionType* function_type, int need_qualifier )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgMemberFunctionRefExp::SgMemberFunctionRefExp (SgMemberFunctionSymbol* symbol_i, int virtual_call, SgFunctionType* function_type, int need_qualifier) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol_i = symbol_i;
     p_virtual_call = virtual_call;
     p_function_type = function_type;
     p_need_qualifier = need_qualifier;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(MEMBER_FUNCTION_REF == this->variant());
     ASSERT_require(MEMBER_FUNCTION_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMemberFunctionRefExp() function since it has been problematic
     ASSERT_not_null(isSgMemberFunctionRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12670 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateFunctionRefExp::SgTemplateFunctionRefExp ( SgTemplateFunctionSymbol* symbol_i )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgTemplateFunctionRefExp::SgTemplateFunctionRefExp (SgTemplateFunctionSymbol* symbol_i) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol_i = symbol_i;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_FUNCTION_REF == this->variant());
     ASSERT_require(TEMPLATE_FUNCTION_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateFunctionRefExp() function since it has been problematic
     ASSERT_not_null(isSgTemplateFunctionRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12700 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateMemberFunctionRefExp::SgTemplateMemberFunctionRefExp ( SgTemplateMemberFunctionSymbol* symbol_i, int virtual_call, int need_qualifier )
   : SgReferenceExp()
   {
#ifdef DEBUG
  // printf ("In SgTemplateMemberFunctionRefExp::SgTemplateMemberFunctionRefExp (SgTemplateMemberFunctionSymbol* symbol_i, int virtual_call, int need_qualifier) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol_i = symbol_i;
     p_virtual_call = virtual_call;
     p_need_qualifier = need_qualifier;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TEMPLATE_MEMBER_FUNCTION_REF == this->variant());
     ASSERT_require(TEMPLATE_MEMBER_FUNCTION_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTemplateMemberFunctionRefExp() function since it has been problematic
     ASSERT_not_null(isSgTemplateMemberFunctionRefExp(this));
   }

// Generated constructor (all data members)

/* #line 12732 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgComprehension::SgComprehension ( SgExpression* target, SgExpression* iter, SgExprListExp* filters )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgComprehension::SgComprehension (SgExpression* target, SgExpression* iter, SgExprListExp* filters) sage_class_name() = %s \n",sage_class_name());
#endif

     p_target = target;
     p_iter = iter;
     p_filters = filters;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(COMPREHENSION == this->variant());
     ASSERT_require(COMPREHENSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgComprehension() function since it has been problematic
     ASSERT_not_null(isSgComprehension(this));
   }

// Generated constructor (all data members)

/* #line 12761 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgListComprehension::SgListComprehension ( SgExpression* element, SgExprListExp* generators )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgListComprehension::SgListComprehension (SgExpression* element, SgExprListExp* generators) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_generators = generators;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LIST_COMPREHENSION == this->variant());
     ASSERT_require(LIST_COMPREHENSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgListComprehension() function since it has been problematic
     ASSERT_not_null(isSgListComprehension(this));
   }

// Generated constructor (all data members)

/* #line 12789 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSetComprehension::SgSetComprehension ( SgExpression* element, SgExprListExp* generators )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSetComprehension::SgSetComprehension (SgExpression* element, SgExprListExp* generators) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_generators = generators;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(SET_COMPREHENSION == this->variant());
     ASSERT_require(SET_COMPREHENSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgSetComprehension() function since it has been problematic
     ASSERT_not_null(isSgSetComprehension(this));
   }

// Generated constructor (all data members)

/* #line 12817 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDictionaryComprehension::SgDictionaryComprehension ( SgKeyDatumPair* element, SgExprListExp* generators )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgDictionaryComprehension::SgDictionaryComprehension (SgKeyDatumPair* element, SgExprListExp* generators) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_generators = generators;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(DICTIONARY_COMPREHENSION == this->variant());
     ASSERT_require(DICTIONARY_COMPREHENSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgDictionaryComprehension() function since it has been problematic
     ASSERT_not_null(isSgDictionaryComprehension(this));
   }

// Generated constructor (all data members)

/* #line 12845 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNaryOp::SgNaryOp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNaryOp::SgNaryOp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NARY_EXPRESSION == this->variant());
     ASSERT_require(NARY_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNaryOp() function since it has been problematic
     ASSERT_not_null(isSgNaryOp(this));
   }

// Generated constructor (all data members)

/* #line 12870 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNaryBooleanOp::SgNaryBooleanOp (  )
   : SgNaryOp()
   {
#ifdef DEBUG
  // printf ("In SgNaryBooleanOp::SgNaryBooleanOp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NARY_BOOLEAN_OP == this->variant());
     ASSERT_require(NARY_BOOLEAN_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNaryBooleanOp() function since it has been problematic
     ASSERT_not_null(isSgNaryBooleanOp(this));
   }

// Generated constructor (all data members)

/* #line 12895 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNaryComparisonOp::SgNaryComparisonOp (  )
   : SgNaryOp()
   {
#ifdef DEBUG
  // printf ("In SgNaryComparisonOp::SgNaryComparisonOp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(NARY_COMPARISON_OP == this->variant());
     ASSERT_require(NARY_COMPARISON_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNaryComparisonOp() function since it has been problematic
     ASSERT_not_null(isSgNaryComparisonOp(this));
   }

// Generated constructor (all data members)

/* #line 12920 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStringConversion::SgStringConversion ( SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgStringConversion::SgStringConversion (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(STR_CONV == this->variant());
     ASSERT_require(STR_CONV == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgStringConversion() function since it has been problematic
     ASSERT_not_null(isSgStringConversion(this));
   }

// Generated constructor (all data members)

/* #line 12947 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgYieldExpression::SgYieldExpression ( SgExpression* value )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgYieldExpression::SgYieldExpression (SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(YIELD_EXP == this->variant());
     ASSERT_require(YIELD_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgYieldExpression() function since it has been problematic
     ASSERT_not_null(isSgYieldExpression(this));
   }

// Generated constructor (all data members)

/* #line 12974 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAlignOfOp::SgAlignOfOp ( SgExpression* operand_expr, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAlignOfOp::SgAlignOfOp (SgExpression* operand_expr, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_expression_type = expression_type;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_alignOfContainsBaseTypeDefiningDeclaration = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ALIGNOF_OP == this->variant());
     ASSERT_require(ALIGNOF_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAlignOfOp() function since it has been problematic
     ASSERT_not_null(isSgAlignOfOp(this));
   }

// Generated constructor (all data members)

/* #line 13007 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRangeExp::SgRangeExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgRangeExp::SgRangeExp () sage_class_name() = %s \n",sage_class_name());
#endif

     p_start = NULL;
     p_end = NULL;
     p_stride = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(RANGE_EXP == this->variant());
     ASSERT_require(RANGE_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgRangeExp() function since it has been problematic
     ASSERT_not_null(isSgRangeExp(this));
   }

// Generated constructor (all data members)

/* #line 13036 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMagicColonExp::SgMagicColonExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgMagicColonExp::SgMagicColonExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(MAGIC_COLON_EXP == this->variant());
     ASSERT_require(MAGIC_COLON_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgMagicColonExp() function since it has been problematic
     ASSERT_not_null(isSgMagicColonExp(this));
   }

// Generated constructor (all data members)

/* #line 13061 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypeTraitBuiltinOperator::SgTypeTraitBuiltinOperator ( SgName name )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgTypeTraitBuiltinOperator::SgTypeTraitBuiltinOperator (SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TYPE_TRAIT_BUILTIN_OPERATOR == this->variant());
     ASSERT_require(TYPE_TRAIT_BUILTIN_OPERATOR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTypeTraitBuiltinOperator() function since it has been problematic
     ASSERT_not_null(isSgTypeTraitBuiltinOperator(this));
   }

// Generated constructor (all data members)

/* #line 13088 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCompoundLiteralExp::SgCompoundLiteralExp ( SgVariableSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCompoundLiteralExp::SgCompoundLiteralExp (SgVariableSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(COMPOUND_LITERAL == this->variant());
     ASSERT_require(COMPOUND_LITERAL == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgCompoundLiteralExp() function since it has been problematic
     ASSERT_not_null(isSgCompoundLiteralExp(this));
   }

// Generated constructor (all data members)

/* #line 13115 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaAnnotation::SgJavaAnnotation ( SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgJavaAnnotation::SgJavaAnnotation (SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression_type = expression_type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_ANNOTATION == this->variant());
     ASSERT_require(JAVA_ANNOTATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaAnnotation() function since it has been problematic
     ASSERT_not_null(isSgJavaAnnotation(this));
   }

// Generated constructor (all data members)

/* #line 13142 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaMarkerAnnotation::SgJavaMarkerAnnotation ( SgType* expression_type )
   : SgJavaAnnotation(expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaMarkerAnnotation::SgJavaMarkerAnnotation (SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(JAVA_MARKER_ANNOTATION == this->variant());
     ASSERT_require(JAVA_MARKER_ANNOTATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaMarkerAnnotation() function since it has been problematic
     ASSERT_not_null(isSgJavaMarkerAnnotation(this));
   }

// Generated constructor (all data members)

/* #line 13167 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaSingleMemberAnnotation::SgJavaSingleMemberAnnotation ( SgType* expression_type, SgExpression* value )
   : SgJavaAnnotation(expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaSingleMemberAnnotation::SgJavaSingleMemberAnnotation (SgType* expression_type, SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_SINGLE_MEMBER_ANNOTATION == this->variant());
     ASSERT_require(JAVA_SINGLE_MEMBER_ANNOTATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaSingleMemberAnnotation() function since it has been problematic
     ASSERT_not_null(isSgJavaSingleMemberAnnotation(this));
   }

// Generated constructor (all data members)

/* #line 13194 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaNormalAnnotation::SgJavaNormalAnnotation ( SgType* expression_type )
   : SgJavaAnnotation(expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaNormalAnnotation::SgJavaNormalAnnotation (SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(JAVA_NORMAL_ANNOTATION == this->variant());
     ASSERT_require(JAVA_NORMAL_ANNOTATION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaNormalAnnotation() function since it has been problematic
     ASSERT_not_null(isSgJavaNormalAnnotation(this));
   }

// Generated constructor (all data members)

/* #line 13219 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaTypeExpression::SgJavaTypeExpression ( SgType* type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgJavaTypeExpression::SgJavaTypeExpression (SgType* type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_type = type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JAVA_TYPE_EXPRESSION == this->variant());
     ASSERT_require(JAVA_TYPE_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJavaTypeExpression() function since it has been problematic
     ASSERT_not_null(isSgJavaTypeExpression(this));
   }

// Generated constructor (all data members)

/* #line 13246 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypeExpression::SgTypeExpression ( SgType* type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgTypeExpression::SgTypeExpression (SgType* type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_type = type;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(TYPE_EXPRESSION == this->variant());
     ASSERT_require(TYPE_EXPRESSION == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgTypeExpression() function since it has been problematic
     ASSERT_not_null(isSgTypeExpression(this));
   }

// Generated constructor (all data members)

/* #line 13273 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassExp::SgClassExp ( SgClassSymbol* class_symbol, int pobj_class )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgClassExp::SgClassExp (SgClassSymbol* class_symbol, int pobj_class) sage_class_name() = %s \n",sage_class_name());
#endif

     p_class_symbol = class_symbol;
     p_pobj_class = pobj_class;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CLASS_NODE == this->variant());
     ASSERT_require(CLASS_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgClassExp() function since it has been problematic
     ASSERT_not_null(isSgClassExp(this));
   }

// Generated constructor (all data members)

/* #line 13301 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionParameterRefExp::SgFunctionParameterRefExp ( int parameter_number, int parameter_levels_up )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgFunctionParameterRefExp::SgFunctionParameterRefExp (int parameter_number, int parameter_levels_up) sage_class_name() = %s \n",sage_class_name());
#endif

     p_parameter_number = parameter_number;
     p_parameter_levels_up = parameter_levels_up;
     p_parameter_expression = NULL;
     p_parameter_type = NULL;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FUNCTION_PARAMETER_REF_EXP == this->variant());
     ASSERT_require(FUNCTION_PARAMETER_REF_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFunctionParameterRefExp() function since it has been problematic
     ASSERT_not_null(isSgFunctionParameterRefExp(this));
   }

// Generated constructor (all data members)

/* #line 13331 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLambdaExp::SgLambdaExp ( SgLambdaCaptureList* lambda_capture_list, SgClassDeclaration* lambda_closure_class, SgFunctionDeclaration* lambda_function )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgLambdaExp::SgLambdaExp (SgLambdaCaptureList* lambda_capture_list, SgClassDeclaration* lambda_closure_class, SgFunctionDeclaration* lambda_function) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lambda_capture_list = lambda_capture_list;
     p_lambda_closure_class = lambda_closure_class;
     p_lambda_function = lambda_function;
     p_is_mutable = false;
     p_capture_default = false;
     p_default_is_by_reference = false;
     p_explicit_return_type = false;
     p_has_parameter_decl = false;
     p_is_device = false;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(LAMBDA_EXP == this->variant());
     ASSERT_require(LAMBDA_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgLambdaExp() function since it has been problematic
     ASSERT_not_null(isSgLambdaExp(this));
   }

// Generated constructor (all data members)

/* #line 13366 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgHereExp::SgHereExp ( SgType* expression_type, SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgHereExp::SgHereExp (SgType* expression_type, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression_type = expression_type;
     p_expression = expression;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(HERE_NODE == this->variant());
     ASSERT_require(HERE_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgHereExp() function since it has been problematic
     ASSERT_not_null(isSgHereExp(this));
   }

// Generated constructor (all data members)

/* #line 13394 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAtExp::SgAtExp ( SgExpression* expression, SgStatement* body )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAtExp::SgAtExp (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ATEXP_NODE == this->variant());
     ASSERT_require(ATEXP_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAtExp() function since it has been problematic
     ASSERT_not_null(isSgAtExp(this));
   }

// Generated constructor (all data members)

/* #line 13422 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFinishExp::SgFinishExp ( SgExpression* expression, SgStatement* body )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgFinishExp::SgFinishExp (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FINISHEXP_NODE == this->variant());
     ASSERT_require(FINISHEXP_NODE == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFinishExp() function since it has been problematic
     ASSERT_not_null(isSgFinishExp(this));
   }

// Generated constructor (all data members)

/* #line 13450 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNoexceptOp::SgNoexceptOp ( SgExpression* operand_expr )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNoexceptOp::SgNoexceptOp (SgExpression* operand_expr) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(NOEXCEPT_OP == this->variant());
     ASSERT_require(NOEXCEPT_OP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgNoexceptOp() function since it has been problematic
     ASSERT_not_null(isSgNoexceptOp(this));
   }

// Generated constructor (all data members)

/* #line 13477 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaTaskRefExp::SgAdaTaskRefExp ( SgAdaTaskSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAdaTaskRefExp::SgAdaTaskRefExp (SgAdaTaskSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_TASK_REF == this->variant());
     ASSERT_require(ADA_TASK_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaTaskRefExp() function since it has been problematic
     ASSERT_not_null(isSgAdaTaskRefExp(this));
   }

// Generated constructor (all data members)

/* #line 13504 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaProtectedRefExp::SgAdaProtectedRefExp ( SgAdaProtectedSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAdaProtectedRefExp::SgAdaProtectedRefExp (SgAdaProtectedSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_PROTECTED_REF == this->variant());
     ASSERT_require(ADA_PROTECTED_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaProtectedRefExp() function since it has been problematic
     ASSERT_not_null(isSgAdaProtectedRefExp(this));
   }

// Generated constructor (all data members)

/* #line 13531 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFoldExpression::SgFoldExpression ( SgExpression* operands, std::string operator_token, bool is_left_associative )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgFoldExpression::SgFoldExpression (SgExpression* operands, std::string operator_token, bool is_left_associative) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operands = operands;
     p_operator_token = operator_token;
     p_is_left_associative = is_left_associative;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(FOLD_EXPR == this->variant());
     ASSERT_require(FOLD_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgFoldExpression() function since it has been problematic
     ASSERT_not_null(isSgFoldExpression(this));
   }

// Generated constructor (all data members)

/* #line 13560 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAwaitExpression::SgAwaitExpression ( SgExpression* value )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAwaitExpression::SgAwaitExpression (SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(AWAIT_EXPR == this->variant());
     ASSERT_require(AWAIT_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAwaitExpression() function since it has been problematic
     ASSERT_not_null(isSgAwaitExpression(this));
   }

// Generated constructor (all data members)

/* #line 13587 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgChooseExpression::SgChooseExpression ( SgExpression* value )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgChooseExpression::SgChooseExpression (SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(CHOOSE_EXPR == this->variant());
     ASSERT_require(CHOOSE_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgChooseExpression() function since it has been problematic
     ASSERT_not_null(isSgChooseExpression(this));
   }

// Generated constructor (all data members)

/* #line 13614 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaAttributeExp::SgAdaAttributeExp ( SgName attribute, SgExpression* object, SgExprListExp* args, SgType* attrType )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAdaAttributeExp::SgAdaAttributeExp (SgName attribute, SgExpression* object, SgExprListExp* args, SgType* attrType) sage_class_name() = %s \n",sage_class_name());
#endif

     p_attribute = attribute;
     p_object = object;
     p_args = args;
     p_attrType = attrType;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_ATTRIBUTE_EXP == this->variant());
     ASSERT_require(ADA_ATTRIBUTE_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaAttributeExp() function since it has been problematic
     ASSERT_not_null(isSgAdaAttributeExp(this));
   }

// Generated constructor (all data members)

/* #line 13644 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialTablePresetExp::SgJovialTablePresetExp ( SgExprListExp* preset_list )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgJovialTablePresetExp::SgJovialTablePresetExp (SgExprListExp* preset_list) sage_class_name() = %s \n",sage_class_name());
#endif

     p_preset_list = preset_list;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_TABLE_PRESET_EXP == this->variant());
     ASSERT_require(JOVIAL_TABLE_PRESET_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialTablePresetExp() function since it has been problematic
     ASSERT_not_null(isSgJovialTablePresetExp(this));
   }

// Generated constructor (all data members)

/* #line 13671 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJovialPresetPositionExp::SgJovialPresetPositionExp ( SgExprListExp* indices, SgExpression* value )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgJovialPresetPositionExp::SgJovialPresetPositionExp (SgExprListExp* indices, SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_indices = indices;
     p_value = value;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(JOVIAL_PRESET_POSITION_EXP == this->variant());
     ASSERT_require(JOVIAL_PRESET_POSITION_EXP == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgJovialPresetPositionExp() function since it has been problematic
     ASSERT_not_null(isSgJovialPresetPositionExp(this));
   }

// Generated constructor (all data members)

/* #line 13699 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaOthersExp::SgAdaOthersExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAdaOthersExp::SgAdaOthersExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     ASSERT_require(ADA_OTHERS_EXPR == this->variant());
     ASSERT_require(ADA_OTHERS_EXPR == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaOthersExp() function since it has been problematic
     ASSERT_not_null(isSgAdaOthersExp(this));
   }

// Generated constructor (all data members)

/* #line 13724 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaRenamingRefExp::SgAdaRenamingRefExp ( SgAdaRenamingSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAdaRenamingRefExp::SgAdaRenamingRefExp (SgAdaRenamingSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_RENAMING_REF == this->variant());
     ASSERT_require(ADA_RENAMING_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaRenamingRefExp() function since it has been problematic
     ASSERT_not_null(isSgAdaRenamingRefExp(this));
   }

// Generated constructor (all data members)

/* #line 13751 "/workspace/generated/src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAdaUnitRefExp::SgAdaUnitRefExp ( SgSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAdaUnitRefExp::SgAdaUnitRefExp (SgSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/workspace/generated/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     ASSERT_require(ADA_UNIT_REF == this->variant());
     ASSERT_require(ADA_UNIT_REF == (int)(this->variantT()));
     post_construction_initialization();

  // Test the isSgAdaUnitRefExp() function since it has been problematic
     ASSERT_not_null(isSgAdaUnitRefExp(this));
   }

// Generated constructor (all data members)


