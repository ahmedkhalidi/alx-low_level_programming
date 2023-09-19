{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x18-dynamic_libraries":{"items":[{"name":"1-create_dynamic_lib.sh","path":"0x18-dynamic_libraries/1-create_dynamic_lib.sh","contentType":"file"},{"name":"100-operations.so","path":"0x18-dynamic_libraries/100-operations.so","contentType":"file"},{"name":"100-tests.py","path":"0x18-dynamic_libraries/100-tests.py","contentType":"file"},{"name":"101-make_me_win.sh","path":"0x18-dynamic_libraries/101-make_me_win.sh","contentType":"file"},{"name":"README.md","path":"0x18-dynamic_libraries/README.md","contentType":"file"},{"name":"abs.c","path":"0x18-dynamic_libraries/abs.c","contentType":"file"},{"name":"atoi.c","path":"0x18-dynamic_libraries/atoi.c","contentType":"file"},{"name":"isalpha.c","path":"0x18-dynamic_libraries/isalpha.c","contentType":"file"},{"name":"isdigit.c","path":"0x18-dynamic_libraries/isdigit.c","contentType":"file"},{"name":"islower.c","path":"0x18-dynamic_libraries/islower.c","contentType":"file"},{"name":"isupper.c","path":"0x18-dynamic_libraries/isupper.c","contentType":"file"},{"name":"libdynamic.so","path":"0x18-dynamic_libraries/libdynamic.so","contentType":"file"},{"name":"main.c","path":"0x18-dynamic_libraries/main.c","contentType":"file"},{"name":"main.h","path":"0x18-dynamic_libraries/main.h","contentType":"file"},{"name":"memcpy.c","path":"0x18-dynamic_libraries/memcpy.c","contentType":"file"},{"name":"memset.c","path":"0x18-dynamic_libraries/memset.c","contentType":"file"},{"name":"operations.h","path":"0x18-dynamic_libraries/operations.h","contentType":"file"},{"name":"putchar.c","path":"0x18-dynamic_libraries/putchar.c","contentType":"file"},{"name":"puts.c","path":"0x18-dynamic_libraries/puts.c","contentType":"file"},{"name":"strcat.c","path":"0x18-dynamic_libraries/strcat.c","contentType":"file"},{"name":"strchr.c","path":"0x18-dynamic_libraries/strchr.c","contentType":"file"},{"name":"strcmp.c","path":"0x18-dynamic_libraries/strcmp.c","contentType":"file"},{"name":"strcpy.c","path":"0x18-dynamic_libraries/strcpy.c","contentType":"file"},{"name":"strlen.c","path":"0x18-dynamic_libraries/strlen.c","contentType":"file"},{"name":"strncat.c","path":"0x18-dynamic_libraries/strncat.c","contentType":"file"},{"name":"strncpy.c","path":"0x18-dynamic_libraries/strncpy.c","contentType":"file"},{"name":"strpbrk.c","path":"0x18-dynamic_libraries/strpbrk.c","contentType":"file"},{"name":"strspn.c","path":"0x18-dynamic_libraries/strspn.c","contentType":"file"},{"name":"strstr.c","path":"0x18-dynamic_libraries/strstr.c","contentType":"file"},{"name":"win.c","path":"0x18-dynamic_libraries/win.c","contentType":"file"},{"name":"winning.so","path":"0x18-dynamic_libraries/winning.so","contentType":"file"}],"totalCount":31},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-incase","path":"0x09-incase","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"0x1A-hash_tables","path":"0x1A-hash_tables","contentType":"directory"},{"name":"0x1C-makefiles","path":"0x1C-makefiles","contentType":"directory"},{"name":"0x1E-search_algorithms","path":"0x1E-search_algorithms","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":28}},"fileTreeProcessingTime":10.117326,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":602457928,"defaultBranch":"master","name":"alx-low_level_programming","ownerLogin":"DagonXIII","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-02-16T08:54:14.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/122855583?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1676537915.890555","canEdit":false,"refType":"branch","currentOid":"988fac1cca4d3573c7cf5dffd920d135904458c5"},"path":"0x18-dynamic_libraries/operations.h","currentUser":null,"blob":{"rawLines":["#ifndef _OPERATIONS_H_","#define _OPERATIONS_H_","","int add(int a, int b);","int sub(int a, int b);","int mul(int a, int b);","int div(int a, int b);","int mod(int a, int b);","","#endif /* _OPERATIONS_H_ */"],"stylingDirectives":[[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":22,"cssClass":"pl-s1"}],[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":22,"cssClass":"pl-s1"}],[],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":7,"cssClass":"pl-en"},{"start":8,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":7,"cssClass":"pl-en"},{"start":8,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":7,"cssClass":"pl-en"},{"start":8,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":7,"cssClass":"pl-en"},{"start":8,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":7,"cssClass":"pl-en"},{"start":8,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-s1"}],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":27,"cssClass":"pl-c"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/DagonXIII/alx-low_level_programming/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/DagonXIII/alx-low_level_programming/security/dependabot","repoSecurityAndAnalysisPath":"/DagonXIII/alx-low_level_programming/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"operations.h","displayUrl":"https://github.com/DagonXIII/alx-low_level_programming/blob/master/0x18-dynamic_libraries/operations.h?raw=true","headerInfo":{"blobSize":"192 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"02259cb","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FDagonXIII%2Falx-low_level_programming%2Fblob%2Fmaster%2F0x18-dynamic_libraries%2Foperations.h","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"11","truncatedSloc":"8"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/DagonXIII/alx-low_level_programming/discussions/new","newIssuePath":"/DagonXIII/alx-low_level_programming/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/DagonXIII/alx-low_level_programming/blob/master/0x18-dynamic_libraries/operations.h","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/DagonXIII/alx-low_level_programming/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"DagonXIII","repoName":"alx-low_level_programming","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"_OPERATIONS_H_","kind":"unknown","identStart":31,"identEnd":45,"extentStart":23,"extentEnd":47,"fullyQualifiedName":"_OPERATIONS_H_","identUtf16":{"start":{"lineNumber":1,"utf16Col":8},"end":{"lineNumber":1,"utf16Col":22}},"extentUtf16":{"start":{"lineNumber":1,"utf16Col":0},"end":{"lineNumber":3,"utf16Col":0}}},{"name":"add","kind":"function","identStart":51,"identEnd":54,"extentStart":51,"extentEnd":68,"fullyQualifiedName":"add","identUtf16":{"start":{"lineNumber":3,"utf16Col":4},"end":{"lineNumber":3,"utf16Col":7}},"extentUtf16":{"start":{"lineNumber":3,"utf16Col":4},"end":{"lineNumber":3,"utf16Col":21}}},{"name":"sub","kind":"function","identStart":74,"identEnd":77,"extentStart":74,"extentEnd":91,"fullyQualifiedName":"sub","identUtf16":{"start":{"lineNumber":4,"utf16Col":4},"end":{"lineNumber":4,"utf16Col":7}},"extentUtf16":{"start":{"lineNumber":4,"utf16Col":4},"end":{"lineNumber":4,"utf16Col":21}}},{"name":"mul","kind":"function","identStart":97,"identEnd":100,"extentStart":97,"extentEnd":114,"fullyQualifiedName":"mul","identUtf16":{"start":{"lineNumber":5,"utf16Col":4},"end":{"lineNumber":5,"utf16Col":7}},"extentUtf16":{"start":{"lineNumber":5,"utf16Col":4},"end":{"lineNumber":5,"utf16Col":21}}},{"name":"div","kind":"function","identStart":120,"identEnd":123,"extentStart":120,"extentEnd":137,"fullyQualifiedName":"div","identUtf16":{"start":{"lineNumber":6,"utf16Col":4},"end":{"lineNumber":6,"utf16Col":7}},"extentUtf16":{"start":{"lineNumber":6,"utf16Col":4},"end":{"lineNumber":6,"utf16Col":21}}},{"name":"mod","kind":"function","identStart":143,"identEnd":146,"extentStart":143,"extentEnd":160,"fullyQualifiedName":"mod","identUtf16":{"start":{"lineNumber":7,"utf16Col":4},"end":{"lineNumber":7,"utf16Col":7}},"extentUtf16":{"start":{"lineNumber":7,"utf16Col":4},"end":{"lineNumber":7,"utf16Col":21}}}]}},"copilotInfo":null,"csrf_tokens":{"/DagonXIII/alx-low_level_programming/branches":{"post":"N-rimwPI6tuZ5dX-ZYAT7xkr-IlnG_Ru_yiTiXqWj3mQYCS-FgKx0Dm4977fSJkJ9wI3v6mMxbLh8gc0hFlKlQ"},"/repos/preferences":{"post":"hZ2kbxk2TJEMnXlgZSbQdkT3Bw5ODrJRuc9HEVho99ZnB1BWwRDE-HyqXRdKTxEyL80mvrJWpHQxbsik5xRLiQ"}}},"title":"alx-low_level_programming/0x18-dynamic_libraries/operations.h at master · DagonXIII/alx-low_level_programming"}