/*
 * Copyright (c) 2020, 2024, Oracle and/or its affiliates.
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

/* eslint-disable @typescript-eslint/no-unused-vars, no-useless-escape */
/* cspell: disable */
#include "MySQLBaseLexer.h"


// Generated from ./targets/antlr4-cpp/MySQLLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace parsers {


class  MySQLLexer : public MySQLBaseLexer {
public:
  enum {
    NOT2_SYMBOL = 1, CONCAT_PIPES_SYMBOL = 2, INT_NUMBER = 3, LONG_NUMBER = 4, 
    ULONGLONG_NUMBER = 5, EQUAL_OPERATOR = 6, ASSIGN_OPERATOR = 7, NULL_SAFE_EQUAL_OPERATOR = 8, 
    GREATER_OR_EQUAL_OPERATOR = 9, GREATER_THAN_OPERATOR = 10, LESS_OR_EQUAL_OPERATOR = 11, 
    LESS_THAN_OPERATOR = 12, NOT_EQUAL_OPERATOR = 13, PLUS_OPERATOR = 14, 
    MINUS_OPERATOR = 15, MULT_OPERATOR = 16, DIV_OPERATOR = 17, MOD_OPERATOR = 18, 
    LOGICAL_NOT_OPERATOR = 19, BITWISE_NOT_OPERATOR = 20, SHIFT_LEFT_OPERATOR = 21, 
    SHIFT_RIGHT_OPERATOR = 22, LOGICAL_AND_OPERATOR = 23, BITWISE_AND_OPERATOR = 24, 
    BITWISE_XOR_OPERATOR = 25, LOGICAL_OR_OPERATOR = 26, BITWISE_OR_OPERATOR = 27, 
    DOT_SYMBOL = 28, COMMA_SYMBOL = 29, SEMICOLON_SYMBOL = 30, COLON_SYMBOL = 31, 
    OPEN_PAR_SYMBOL = 32, CLOSE_PAR_SYMBOL = 33, OPEN_CURLY_SYMBOL = 34, 
    CLOSE_CURLY_SYMBOL = 35, UNDERLINE_SYMBOL = 36, JSON_SEPARATOR_SYMBOL = 37, 
    JSON_UNQUOTED_SEPARATOR_SYMBOL = 38, AT_SIGN_SYMBOL = 39, AT_TEXT_SUFFIX = 40, 
    AT_AT_SIGN_SYMBOL = 41, NULL2_SYMBOL = 42, PARAM_MARKER = 43, HEX_NUMBER = 44, 
    BIN_NUMBER = 45, DECIMAL_NUMBER = 46, FLOAT_NUMBER = 47, ACCESSIBLE_SYMBOL = 48, 
    ACCOUNT_SYMBOL = 49, ACTION_SYMBOL = 50, ADD_SYMBOL = 51, ADDDATE_SYMBOL = 52, 
    AFTER_SYMBOL = 53, AGAINST_SYMBOL = 54, AGGREGATE_SYMBOL = 55, ALGORITHM_SYMBOL = 56, 
    ALL_SYMBOL = 57, ALTER_SYMBOL = 58, ALWAYS_SYMBOL = 59, ANALYZE_SYMBOL = 60, 
    AND_SYMBOL = 61, ANY_SYMBOL = 62, AS_SYMBOL = 63, ASC_SYMBOL = 64, ASCII_SYMBOL = 65, 
    ASENSITIVE_SYMBOL = 66, AT_SYMBOL = 67, AUTOEXTEND_SIZE_SYMBOL = 68, 
    AUTO_INCREMENT_SYMBOL = 69, AVG_ROW_LENGTH_SYMBOL = 70, AVG_SYMBOL = 71, 
    BACKUP_SYMBOL = 72, BEFORE_SYMBOL = 73, BEGIN_SYMBOL = 74, BETWEEN_SYMBOL = 75, 
    BIGINT_SYMBOL = 76, BINARY_SYMBOL = 77, BINLOG_SYMBOL = 78, BIT_AND_SYMBOL = 79, 
    BIT_OR_SYMBOL = 80, BIT_SYMBOL = 81, BIT_XOR_SYMBOL = 82, BLOB_SYMBOL = 83, 
    BLOCK_SYMBOL = 84, BOOLEAN_SYMBOL = 85, BOOL_SYMBOL = 86, BOTH_SYMBOL = 87, 
    BTREE_SYMBOL = 88, BY_SYMBOL = 89, BYTE_SYMBOL = 90, CACHE_SYMBOL = 91, 
    CALL_SYMBOL = 92, CASCADE_SYMBOL = 93, CASCADED_SYMBOL = 94, CASE_SYMBOL = 95, 
    CAST_SYMBOL = 96, CATALOG_NAME_SYMBOL = 97, CHAIN_SYMBOL = 98, CHANGE_SYMBOL = 99, 
    CHANGED_SYMBOL = 100, CHANNEL_SYMBOL = 101, CHARSET_SYMBOL = 102, CHAR_SYMBOL = 103, 
    CHECKSUM_SYMBOL = 104, CHECK_SYMBOL = 105, CIPHER_SYMBOL = 106, CLASS_ORIGIN_SYMBOL = 107, 
    CLIENT_SYMBOL = 108, CLOSE_SYMBOL = 109, COALESCE_SYMBOL = 110, CODE_SYMBOL = 111, 
    COLLATE_SYMBOL = 112, COLLATION_SYMBOL = 113, COLUMNS_SYMBOL = 114, 
    COLUMN_SYMBOL = 115, COLUMN_NAME_SYMBOL = 116, COLUMN_FORMAT_SYMBOL = 117, 
    COMMENT_SYMBOL = 118, COMMITTED_SYMBOL = 119, COMMIT_SYMBOL = 120, COMPACT_SYMBOL = 121, 
    COMPLETION_SYMBOL = 122, COMPRESSED_SYMBOL = 123, COMPRESSION_SYMBOL = 124, 
    CONCURRENT_SYMBOL = 125, CONDITION_SYMBOL = 126, CONNECTION_SYMBOL = 127, 
    CONSISTENT_SYMBOL = 128, CONSTRAINT_SYMBOL = 129, CONSTRAINT_CATALOG_SYMBOL = 130, 
    CONSTRAINT_NAME_SYMBOL = 131, CONSTRAINT_SCHEMA_SYMBOL = 132, CONTAINS_SYMBOL = 133, 
    CONTEXT_SYMBOL = 134, CONTINUE_SYMBOL = 135, CONVERT_SYMBOL = 136, COUNT_SYMBOL = 137, 
    CPU_SYMBOL = 138, CREATE_SYMBOL = 139, CROSS_SYMBOL = 140, CUBE_SYMBOL = 141, 
    CURDATE_SYMBOL = 142, CURRENT_SYMBOL = 143, CURRENT_DATE_SYMBOL = 144, 
    CURRENT_TIME_SYMBOL = 145, CURRENT_USER_SYMBOL = 146, CURSOR_SYMBOL = 147, 
    CURSOR_NAME_SYMBOL = 148, CURTIME_SYMBOL = 149, DATABASE_SYMBOL = 150, 
    DATABASES_SYMBOL = 151, DATAFILE_SYMBOL = 152, DATA_SYMBOL = 153, DATETIME_SYMBOL = 154, 
    DATE_ADD_SYMBOL = 155, DATE_SUB_SYMBOL = 156, DATE_SYMBOL = 157, DAY_HOUR_SYMBOL = 158, 
    DAY_MICROSECOND_SYMBOL = 159, DAY_MINUTE_SYMBOL = 160, DAY_SECOND_SYMBOL = 161, 
    DAY_SYMBOL = 162, DEALLOCATE_SYMBOL = 163, DECIMAL_SYMBOL = 164, DECLARE_SYMBOL = 165, 
    DEFAULT_SYMBOL = 166, DEFAULT_AUTH_SYMBOL = 167, DEFINER_SYMBOL = 168, 
    DELAYED_SYMBOL = 169, DELAY_KEY_WRITE_SYMBOL = 170, DELETE_SYMBOL = 171, 
    DESC_SYMBOL = 172, DESCRIBE_SYMBOL = 173, DETERMINISTIC_SYMBOL = 174, 
    DIAGNOSTICS_SYMBOL = 175, DIRECTORY_SYMBOL = 176, DISABLE_SYMBOL = 177, 
    DISCARD_SYMBOL = 178, DISK_SYMBOL = 179, DISTINCT_SYMBOL = 180, DIV_SYMBOL = 181, 
    DOUBLE_SYMBOL = 182, DO_SYMBOL = 183, DROP_SYMBOL = 184, DUAL_SYMBOL = 185, 
    DUMPFILE_SYMBOL = 186, DUPLICATE_SYMBOL = 187, DYNAMIC_SYMBOL = 188, 
    EACH_SYMBOL = 189, ELSE_SYMBOL = 190, ELSEIF_SYMBOL = 191, ENABLE_SYMBOL = 192, 
    ENCLOSED_SYMBOL = 193, ENCRYPTION_SYMBOL = 194, END_SYMBOL = 195, ENDS_SYMBOL = 196, 
    ENGINES_SYMBOL = 197, ENGINE_SYMBOL = 198, ENUM_SYMBOL = 199, ERROR_SYMBOL = 200, 
    ERRORS_SYMBOL = 201, ESCAPED_SYMBOL = 202, ESCAPE_SYMBOL = 203, EVENTS_SYMBOL = 204, 
    EVENT_SYMBOL = 205, EVERY_SYMBOL = 206, EXCHANGE_SYMBOL = 207, EXECUTE_SYMBOL = 208, 
    EXISTS_SYMBOL = 209, EXIT_SYMBOL = 210, EXPANSION_SYMBOL = 211, EXPIRE_SYMBOL = 212, 
    EXPLAIN_SYMBOL = 213, EXPORT_SYMBOL = 214, EXTENDED_SYMBOL = 215, EXTENT_SIZE_SYMBOL = 216, 
    EXTRACT_SYMBOL = 217, FALSE_SYMBOL = 218, FAST_SYMBOL = 219, FAULTS_SYMBOL = 220, 
    FETCH_SYMBOL = 221, FILE_SYMBOL = 222, FILE_BLOCK_SIZE_SYMBOL = 223, 
    FILTER_SYMBOL = 224, FIRST_SYMBOL = 225, FIXED_SYMBOL = 226, FLOAT_SYMBOL = 227, 
    FLUSH_SYMBOL = 228, FOLLOWS_SYMBOL = 229, FORCE_SYMBOL = 230, FOREIGN_SYMBOL = 231, 
    FOR_SYMBOL = 232, FORMAT_SYMBOL = 233, FOUND_SYMBOL = 234, FROM_SYMBOL = 235, 
    FULL_SYMBOL = 236, FULLTEXT_SYMBOL = 237, FUNCTION_SYMBOL = 238, GET_SYMBOL = 239, 
    GENERAL_SYMBOL = 240, GENERATED_SYMBOL = 241, GROUP_REPLICATION_SYMBOL = 242, 
    GEOMETRYCOLLECTION_SYMBOL = 243, GEOMETRY_SYMBOL = 244, GET_FORMAT_SYMBOL = 245, 
    GLOBAL_SYMBOL = 246, GRANT_SYMBOL = 247, GRANTS_SYMBOL = 248, GROUP_SYMBOL = 249, 
    GROUP_CONCAT_SYMBOL = 250, HANDLER_SYMBOL = 251, HASH_SYMBOL = 252, 
    HAVING_SYMBOL = 253, HELP_SYMBOL = 254, HIGH_PRIORITY_SYMBOL = 255, 
    HOST_SYMBOL = 256, HOSTS_SYMBOL = 257, HOUR_MICROSECOND_SYMBOL = 258, 
    HOUR_MINUTE_SYMBOL = 259, HOUR_SECOND_SYMBOL = 260, HOUR_SYMBOL = 261, 
    IDENTIFIED_SYMBOL = 262, IF_SYMBOL = 263, IGNORE_SYMBOL = 264, IGNORE_SERVER_IDS_SYMBOL = 265, 
    IMPORT_SYMBOL = 266, INDEXES_SYMBOL = 267, INDEX_SYMBOL = 268, INFILE_SYMBOL = 269, 
    INITIAL_SIZE_SYMBOL = 270, INNER_SYMBOL = 271, INOUT_SYMBOL = 272, INSENSITIVE_SYMBOL = 273, 
    INSERT_SYMBOL = 274, INSERT_METHOD_SYMBOL = 275, INSTANCE_SYMBOL = 276, 
    INSTALL_SYMBOL = 277, INTERVAL_SYMBOL = 278, INTO_SYMBOL = 279, INT_SYMBOL = 280, 
    INVOKER_SYMBOL = 281, IN_SYMBOL = 282, IO_AFTER_GTIDS_SYMBOL = 283, 
    IO_BEFORE_GTIDS_SYMBOL = 284, IO_SYMBOL = 285, IPC_SYMBOL = 286, IS_SYMBOL = 287, 
    ISOLATION_SYMBOL = 288, ISSUER_SYMBOL = 289, ITERATE_SYMBOL = 290, JOIN_SYMBOL = 291, 
    JSON_SYMBOL = 292, KEYS_SYMBOL = 293, KEY_BLOCK_SIZE_SYMBOL = 294, KEY_SYMBOL = 295, 
    KILL_SYMBOL = 296, LANGUAGE_SYMBOL = 297, LAST_SYMBOL = 298, LEADING_SYMBOL = 299, 
    LEAVES_SYMBOL = 300, LEAVE_SYMBOL = 301, LEFT_SYMBOL = 302, LESS_SYMBOL = 303, 
    LEVEL_SYMBOL = 304, LIKE_SYMBOL = 305, LIMIT_SYMBOL = 306, LINEAR_SYMBOL = 307, 
    LINES_SYMBOL = 308, LINESTRING_SYMBOL = 309, LIST_SYMBOL = 310, LOAD_SYMBOL = 311, 
    LOCAL_SYMBOL = 312, LOCKS_SYMBOL = 313, LOCK_SYMBOL = 314, LOGFILE_SYMBOL = 315, 
    LOGS_SYMBOL = 316, LONGBLOB_SYMBOL = 317, LONGTEXT_SYMBOL = 318, LONG_SYMBOL = 319, 
    LOOP_SYMBOL = 320, LOW_PRIORITY_SYMBOL = 321, MASTER_AUTO_POSITION_SYMBOL = 322, 
    MASTER_BIND_SYMBOL = 323, MASTER_CONNECT_RETRY_SYMBOL = 324, MASTER_DELAY_SYMBOL = 325, 
    MASTER_HOST_SYMBOL = 326, MASTER_LOG_FILE_SYMBOL = 327, MASTER_LOG_POS_SYMBOL = 328, 
    MASTER_PASSWORD_SYMBOL = 329, MASTER_PORT_SYMBOL = 330, MASTER_RETRY_COUNT_SYMBOL = 331, 
    MASTER_SSL_CAPATH_SYMBOL = 332, MASTER_SSL_CA_SYMBOL = 333, MASTER_SSL_CERT_SYMBOL = 334, 
    MASTER_SSL_CIPHER_SYMBOL = 335, MASTER_SSL_CRL_SYMBOL = 336, MASTER_SSL_CRLPATH_SYMBOL = 337, 
    MASTER_SSL_KEY_SYMBOL = 338, MASTER_SSL_SYMBOL = 339, MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL = 340, 
    MASTER_SYMBOL = 341, MASTER_TLS_VERSION_SYMBOL = 342, MASTER_USER_SYMBOL = 343, 
    MASTER_HEARTBEAT_PERIOD_SYMBOL = 344, MATCH_SYMBOL = 345, MAX_CONNECTIONS_PER_HOUR_SYMBOL = 346, 
    MAX_QUERIES_PER_HOUR_SYMBOL = 347, MAX_ROWS_SYMBOL = 348, MAX_SIZE_SYMBOL = 349, 
    MAX_SYMBOL = 350, MAX_UPDATES_PER_HOUR_SYMBOL = 351, MAX_USER_CONNECTIONS_SYMBOL = 352, 
    MAXVALUE_SYMBOL = 353, MEDIUMBLOB_SYMBOL = 354, MEDIUMINT_SYMBOL = 355, 
    MEDIUMTEXT_SYMBOL = 356, MEDIUM_SYMBOL = 357, MEMORY_SYMBOL = 358, MERGE_SYMBOL = 359, 
    MESSAGE_TEXT_SYMBOL = 360, MICROSECOND_SYMBOL = 361, MID_SYMBOL = 362, 
    MIGRATE_SYMBOL = 363, MINUTE_MICROSECOND_SYMBOL = 364, MINUTE_SECOND_SYMBOL = 365, 
    MINUTE_SYMBOL = 366, MIN_ROWS_SYMBOL = 367, MIN_SYMBOL = 368, MODE_SYMBOL = 369, 
    MODIFIES_SYMBOL = 370, MODIFY_SYMBOL = 371, MOD_SYMBOL = 372, MONTH_SYMBOL = 373, 
    MULTILINESTRING_SYMBOL = 374, MULTIPOINT_SYMBOL = 375, MULTIPOLYGON_SYMBOL = 376, 
    MUTEX_SYMBOL = 377, MYSQL_ERRNO_SYMBOL = 378, NAMES_SYMBOL = 379, NAME_SYMBOL = 380, 
    NATIONAL_SYMBOL = 381, NATURAL_SYMBOL = 382, NCHAR_SYMBOL = 383, NDBCLUSTER_SYMBOL = 384, 
    NEVER_SYMBOL = 385, NEW_SYMBOL = 386, NEXT_SYMBOL = 387, NODEGROUP_SYMBOL = 388, 
    NONE_SYMBOL = 389, NOT_SYMBOL = 390, NOW_SYMBOL = 391, NO_SYMBOL = 392, 
    NO_WAIT_SYMBOL = 393, NO_WRITE_TO_BINLOG_SYMBOL = 394, NULL_SYMBOL = 395, 
    NUMBER_SYMBOL = 396, NUMERIC_SYMBOL = 397, NVARCHAR_SYMBOL = 398, OFFLINE_SYMBOL = 399, 
    OFFSET_SYMBOL = 400, ON_SYMBOL = 401, ONE_SYMBOL = 402, ONLINE_SYMBOL = 403, 
    ONLY_SYMBOL = 404, OPEN_SYMBOL = 405, OPTIMIZE_SYMBOL = 406, OPTIMIZER_COSTS_SYMBOL = 407, 
    OPTIONS_SYMBOL = 408, OPTION_SYMBOL = 409, OPTIONALLY_SYMBOL = 410, 
    ORDER_SYMBOL = 411, OR_SYMBOL = 412, OUTER_SYMBOL = 413, OUTFILE_SYMBOL = 414, 
    OUT_SYMBOL = 415, OWNER_SYMBOL = 416, PACK_KEYS_SYMBOL = 417, PAGE_SYMBOL = 418, 
    PARSER_SYMBOL = 419, PARTIAL_SYMBOL = 420, PARTITIONING_SYMBOL = 421, 
    PARTITIONS_SYMBOL = 422, PARTITION_SYMBOL = 423, PASSWORD_SYMBOL = 424, 
    PHASE_SYMBOL = 425, PLUGINS_SYMBOL = 426, PLUGIN_DIR_SYMBOL = 427, PLUGIN_SYMBOL = 428, 
    POINT_SYMBOL = 429, POLYGON_SYMBOL = 430, PORT_SYMBOL = 431, POSITION_SYMBOL = 432, 
    PRECEDES_SYMBOL = 433, PRECISION_SYMBOL = 434, PREPARE_SYMBOL = 435, 
    PRESERVE_SYMBOL = 436, PREV_SYMBOL = 437, PRIMARY_SYMBOL = 438, PRIVILEGES_SYMBOL = 439, 
    PROCEDURE_SYMBOL = 440, PROCESS_SYMBOL = 441, PROCESSLIST_SYMBOL = 442, 
    PROFILE_SYMBOL = 443, PROFILES_SYMBOL = 444, PROXY_SYMBOL = 445, PURGE_SYMBOL = 446, 
    QUARTER_SYMBOL = 447, QUERY_SYMBOL = 448, QUICK_SYMBOL = 449, RANGE_SYMBOL = 450, 
    READS_SYMBOL = 451, READ_ONLY_SYMBOL = 452, READ_SYMBOL = 453, READ_WRITE_SYMBOL = 454, 
    REAL_SYMBOL = 455, REBUILD_SYMBOL = 456, RECOVER_SYMBOL = 457, REDO_BUFFER_SIZE_SYMBOL = 458, 
    REDUNDANT_SYMBOL = 459, REFERENCES_SYMBOL = 460, REGEXP_SYMBOL = 461, 
    RELAY_SYMBOL = 462, RELAYLOG_SYMBOL = 463, RELAY_LOG_FILE_SYMBOL = 464, 
    RELAY_LOG_POS_SYMBOL = 465, RELAY_THREAD_SYMBOL = 466, RELEASE_SYMBOL = 467, 
    RELOAD_SYMBOL = 468, REMOVE_SYMBOL = 469, RENAME_SYMBOL = 470, REORGANIZE_SYMBOL = 471, 
    REPAIR_SYMBOL = 472, REPEATABLE_SYMBOL = 473, REPEAT_SYMBOL = 474, REPLACE_SYMBOL = 475, 
    REPLICATION_SYMBOL = 476, REPLICATE_DO_DB_SYMBOL = 477, REPLICATE_IGNORE_DB_SYMBOL = 478, 
    REPLICATE_DO_TABLE_SYMBOL = 479, REPLICATE_IGNORE_TABLE_SYMBOL = 480, 
    REPLICATE_WILD_DO_TABLE_SYMBOL = 481, REPLICATE_WILD_IGNORE_TABLE_SYMBOL = 482, 
    REPLICATE_REWRITE_DB_SYMBOL = 483, REQUIRE_SYMBOL = 484, RESET_SYMBOL = 485, 
    RESIGNAL_SYMBOL = 486, RESTORE_SYMBOL = 487, RESTRICT_SYMBOL = 488, 
    RESUME_SYMBOL = 489, RETURNED_SQLSTATE_SYMBOL = 490, RETURNS_SYMBOL = 491, 
    RETURN_SYMBOL = 492, REVERSE_SYMBOL = 493, REVOKE_SYMBOL = 494, RIGHT_SYMBOL = 495, 
    ROLLBACK_SYMBOL = 496, ROLLUP_SYMBOL = 497, ROTATE_SYMBOL = 498, ROUTINE_SYMBOL = 499, 
    ROWS_SYMBOL = 500, ROW_COUNT_SYMBOL = 501, ROW_FORMAT_SYMBOL = 502, 
    ROW_SYMBOL = 503, RTREE_SYMBOL = 504, SAVEPOINT_SYMBOL = 505, SCHEDULE_SYMBOL = 506, 
    SCHEMA_NAME_SYMBOL = 507, SECOND_MICROSECOND_SYMBOL = 508, SECOND_SYMBOL = 509, 
    SECURITY_SYMBOL = 510, SELECT_SYMBOL = 511, SENSITIVE_SYMBOL = 512, 
    SEPARATOR_SYMBOL = 513, SERIALIZABLE_SYMBOL = 514, SERIAL_SYMBOL = 515, 
    SESSION_SYMBOL = 516, SERVER_SYMBOL = 517, SESSION_USER_SYMBOL = 518, 
    SET_SYMBOL = 519, SHARE_SYMBOL = 520, SHOW_SYMBOL = 521, SHUTDOWN_SYMBOL = 522, 
    SIGNAL_SYMBOL = 523, SIGNED_SYMBOL = 524, SIMPLE_SYMBOL = 525, SLAVE_SYMBOL = 526, 
    SLOW_SYMBOL = 527, SMALLINT_SYMBOL = 528, SNAPSHOT_SYMBOL = 529, SOCKET_SYMBOL = 530, 
    SONAME_SYMBOL = 531, SOUNDS_SYMBOL = 532, SOURCE_SYMBOL = 533, SPATIAL_SYMBOL = 534, 
    SPECIFIC_SYMBOL = 535, SQLEXCEPTION_SYMBOL = 536, SQLSTATE_SYMBOL = 537, 
    SQLWARNING_SYMBOL = 538, SQL_AFTER_GTIDS_SYMBOL = 539, SQL_AFTER_MTS_GAPS_SYMBOL = 540, 
    SQL_BEFORE_GTIDS_SYMBOL = 541, SQL_BIG_RESULT_SYMBOL = 542, SQL_BUFFER_RESULT_SYMBOL = 543, 
    SQL_CALC_FOUND_ROWS_SYMBOL = 544, SQL_NO_CACHE_SYMBOL = 545, SQL_SMALL_RESULT_SYMBOL = 546, 
    SQL_SYMBOL = 547, SQL_THREAD_SYMBOL = 548, SSL_SYMBOL = 549, STACKED_SYMBOL = 550, 
    STARTING_SYMBOL = 551, STARTS_SYMBOL = 552, START_SYMBOL = 553, STATS_AUTO_RECALC_SYMBOL = 554, 
    STATS_PERSISTENT_SYMBOL = 555, STATS_SAMPLE_PAGES_SYMBOL = 556, STATUS_SYMBOL = 557, 
    STDDEV_SAMP_SYMBOL = 558, STDDEV_SYMBOL = 559, STDDEV_POP_SYMBOL = 560, 
    STD_SYMBOL = 561, STOP_SYMBOL = 562, STORAGE_SYMBOL = 563, STORED_SYMBOL = 564, 
    STRAIGHT_JOIN_SYMBOL = 565, STRING_SYMBOL = 566, SUBCLASS_ORIGIN_SYMBOL = 567, 
    SUBDATE_SYMBOL = 568, SUBJECT_SYMBOL = 569, SUBPARTITIONS_SYMBOL = 570, 
    SUBPARTITION_SYMBOL = 571, SUBSTR_SYMBOL = 572, SUBSTRING_SYMBOL = 573, 
    SUM_SYMBOL = 574, SUPER_SYMBOL = 575, SUSPEND_SYMBOL = 576, SWAPS_SYMBOL = 577, 
    SWITCHES_SYMBOL = 578, SYSDATE_SYMBOL = 579, SYSTEM_USER_SYMBOL = 580, 
    TABLES_SYMBOL = 581, TABLESPACE_SYMBOL = 582, TABLE_SYMBOL = 583, TABLE_CHECKSUM_SYMBOL = 584, 
    TABLE_NAME_SYMBOL = 585, TEMPORARY_SYMBOL = 586, TEMPTABLE_SYMBOL = 587, 
    TERMINATED_SYMBOL = 588, TEXT_SYMBOL = 589, THAN_SYMBOL = 590, THEN_SYMBOL = 591, 
    TIMESTAMP_SYMBOL = 592, TIMESTAMPADD_SYMBOL = 593, TIMESTAMPDIFF_SYMBOL = 594, 
    TIME_SYMBOL = 595, TINYBLOB_SYMBOL = 596, TINYINT_SYMBOL = 597, TINYTEXT_SYMBOL = 598, 
    TO_SYMBOL = 599, TRAILING_SYMBOL = 600, TRANSACTION_SYMBOL = 601, TRIGGERS_SYMBOL = 602, 
    TRIGGER_SYMBOL = 603, TRIM_SYMBOL = 604, TRUE_SYMBOL = 605, TRUNCATE_SYMBOL = 606, 
    TYPES_SYMBOL = 607, TYPE_SYMBOL = 608, UDF_RETURNS_SYMBOL = 609, UNCOMMITTED_SYMBOL = 610, 
    UNDEFINED_SYMBOL = 611, UNDOFILE_SYMBOL = 612, UNDO_BUFFER_SIZE_SYMBOL = 613, 
    UNDO_SYMBOL = 614, UNICODE_SYMBOL = 615, UNINSTALL_SYMBOL = 616, UNION_SYMBOL = 617, 
    UNIQUE_SYMBOL = 618, UNKNOWN_SYMBOL = 619, UNLOCK_SYMBOL = 620, UNSIGNED_SYMBOL = 621, 
    UNTIL_SYMBOL = 622, UPDATE_SYMBOL = 623, UPGRADE_SYMBOL = 624, USAGE_SYMBOL = 625, 
    USER_RESOURCES_SYMBOL = 626, USER_SYMBOL = 627, USE_FRM_SYMBOL = 628, 
    USE_SYMBOL = 629, USING_SYMBOL = 630, UTC_DATE_SYMBOL = 631, UTC_TIMESTAMP_SYMBOL = 632, 
    UTC_TIME_SYMBOL = 633, VALIDATION_SYMBOL = 634, VALUES_SYMBOL = 635, 
    VALUE_SYMBOL = 636, VARBINARY_SYMBOL = 637, VARCHAR_SYMBOL = 638, VARIABLES_SYMBOL = 639, 
    VARIANCE_SYMBOL = 640, VARYING_SYMBOL = 641, VAR_POP_SYMBOL = 642, VAR_SAMP_SYMBOL = 643, 
    VIEW_SYMBOL = 644, VIRTUAL_SYMBOL = 645, WAIT_SYMBOL = 646, WARNINGS_SYMBOL = 647, 
    WEEK_SYMBOL = 648, WEIGHT_STRING_SYMBOL = 649, WHEN_SYMBOL = 650, WHERE_SYMBOL = 651, 
    WHILE_SYMBOL = 652, WITH_SYMBOL = 653, WITHOUT_SYMBOL = 654, WORK_SYMBOL = 655, 
    WRAPPER_SYMBOL = 656, WRITE_SYMBOL = 657, X509_SYMBOL = 658, XA_SYMBOL = 659, 
    XID_SYMBOL = 660, XML_SYMBOL = 661, XOR_SYMBOL = 662, YEAR_MONTH_SYMBOL = 663, 
    YEAR_SYMBOL = 664, ZEROFILL_SYMBOL = 665, PERSIST_SYMBOL = 666, ROLE_SYMBOL = 667, 
    ADMIN_SYMBOL = 668, INVISIBLE_SYMBOL = 669, VISIBLE_SYMBOL = 670, EXCEPT_SYMBOL = 671, 
    COMPONENT_SYMBOL = 672, RECURSIVE_SYMBOL = 673, JSON_OBJECTAGG_SYMBOL = 674, 
    JSON_ARRAYAGG_SYMBOL = 675, OF_SYMBOL = 676, SKIP_SYMBOL = 677, LOCKED_SYMBOL = 678, 
    NOWAIT_SYMBOL = 679, GROUPING_SYMBOL = 680, PERSIST_ONLY_SYMBOL = 681, 
    HISTOGRAM_SYMBOL = 682, BUCKETS_SYMBOL = 683, REMOTE_SYMBOL = 684, CLONE_SYMBOL = 685, 
    CUME_DIST_SYMBOL = 686, DENSE_RANK_SYMBOL = 687, EXCLUDE_SYMBOL = 688, 
    FIRST_VALUE_SYMBOL = 689, FOLLOWING_SYMBOL = 690, GROUPS_SYMBOL = 691, 
    LAG_SYMBOL = 692, LAST_VALUE_SYMBOL = 693, LEAD_SYMBOL = 694, NTH_VALUE_SYMBOL = 695, 
    NTILE_SYMBOL = 696, NULLS_SYMBOL = 697, OTHERS_SYMBOL = 698, OVER_SYMBOL = 699, 
    PERCENT_RANK_SYMBOL = 700, PRECEDING_SYMBOL = 701, RANK_SYMBOL = 702, 
    RESPECT_SYMBOL = 703, ROW_NUMBER_SYMBOL = 704, TIES_SYMBOL = 705, UNBOUNDED_SYMBOL = 706, 
    WINDOW_SYMBOL = 707, EMPTY_SYMBOL = 708, JSON_TABLE_SYMBOL = 709, NESTED_SYMBOL = 710, 
    ORDINALITY_SYMBOL = 711, PATH_SYMBOL = 712, HISTORY_SYMBOL = 713, REUSE_SYMBOL = 714, 
    SRID_SYMBOL = 715, THREAD_PRIORITY_SYMBOL = 716, RESOURCE_SYMBOL = 717, 
    SYSTEM_SYMBOL = 718, VCPU_SYMBOL = 719, MASTER_PUBLIC_KEY_PATH_SYMBOL = 720, 
    GET_MASTER_PUBLIC_KEY_SYMBOL = 721, RESTART_SYMBOL = 722, DEFINITION_SYMBOL = 723, 
    DESCRIPTION_SYMBOL = 724, ORGANIZATION_SYMBOL = 725, REFERENCE_SYMBOL = 726, 
    OPTIONAL_SYMBOL = 727, SECONDARY_SYMBOL = 728, SECONDARY_ENGINE_SYMBOL = 729, 
    SECONDARY_LOAD_SYMBOL = 730, SECONDARY_UNLOAD_SYMBOL = 731, ACTIVE_SYMBOL = 732, 
    INACTIVE_SYMBOL = 733, LATERAL_SYMBOL = 734, RETAIN_SYMBOL = 735, OLD_SYMBOL = 736, 
    NETWORK_NAMESPACE_SYMBOL = 737, ENFORCED_SYMBOL = 738, ARRAY_SYMBOL = 739, 
    OJ_SYMBOL = 740, MEMBER_SYMBOL = 741, RANDOM_SYMBOL = 742, MASTER_COMPRESSION_ALGORITHM_SYMBOL = 743, 
    MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL = 744, PRIVILEGE_CHECKS_USER_SYMBOL = 745, 
    MASTER_TLS_CIPHERSUITES_SYMBOL = 746, REQUIRE_ROW_FORMAT_SYMBOL = 747, 
    PASSWORD_LOCK_TIME_SYMBOL = 748, FAILED_LOGIN_ATTEMPTS_SYMBOL = 749, 
    REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYMBOL = 750, STREAM_SYMBOL = 751, OFF_SYMBOL = 752, 
    RETURNING_SYMBOL = 753, JSON_VALUE_SYMBOL = 754, TLS_SYMBOL = 755, ATTRIBUTE_SYMBOL = 756, 
    ENGINE_ATTRIBUTE_SYMBOL = 757, SECONDARY_ENGINE_ATTRIBUTE_SYMBOL = 758, 
    SOURCE_CONNECTION_AUTO_FAILOVER_SYMBOL = 759, ZONE_SYMBOL = 760, GRAMMAR_SELECTOR_DERIVED_EXPR = 761, 
    REPLICA_SYMBOL = 762, REPLICAS_SYMBOL = 763, ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYMBOL = 764, 
    GET_SOURCE_PUBLIC_KEY_SYMBOL = 765, SOURCE_AUTO_POSITION_SYMBOL = 766, 
    SOURCE_BIND_SYMBOL = 767, SOURCE_COMPRESSION_ALGORITHM_SYMBOL = 768, 
    SOURCE_CONNECT_RETRY_SYMBOL = 769, SOURCE_DELAY_SYMBOL = 770, SOURCE_HEARTBEAT_PERIOD_SYMBOL = 771, 
    SOURCE_HOST_SYMBOL = 772, SOURCE_LOG_FILE_SYMBOL = 773, SOURCE_LOG_POS_SYMBOL = 774, 
    SOURCE_PASSWORD_SYMBOL = 775, SOURCE_PORT_SYMBOL = 776, SOURCE_PUBLIC_KEY_PATH_SYMBOL = 777, 
    SOURCE_RETRY_COUNT_SYMBOL = 778, SOURCE_SSL_SYMBOL = 779, SOURCE_SSL_CA_SYMBOL = 780, 
    SOURCE_SSL_CAPATH_SYMBOL = 781, SOURCE_SSL_CERT_SYMBOL = 782, SOURCE_SSL_CIPHER_SYMBOL = 783, 
    SOURCE_SSL_CRL_SYMBOL = 784, SOURCE_SSL_CRLPATH_SYMBOL = 785, SOURCE_SSL_KEY_SYMBOL = 786, 
    SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOL = 787, SOURCE_TLS_CIPHERSUITES_SYMBOL = 788, 
    SOURCE_TLS_VERSION_SYMBOL = 789, SOURCE_USER_SYMBOL = 790, SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOL = 791, 
    ST_COLLECT_SYMBOL = 792, KEYRING_SYMBOL = 793, AUTHENTICATION_SYMBOL = 794, 
    FACTOR_SYMBOL = 795, FINISH_SYMBOL = 796, INITIATE_SYMBOL = 797, REGISTRATION_SYMBOL = 798, 
    UNREGISTER_SYMBOL = 799, INITIAL_SYMBOL = 800, CHALLENGE_RESPONSE_SYMBOL = 801, 
    GTID_ONLY_SYMBOL = 802, INTERSECT_SYMBOL = 803, BULK_SYMBOL = 804, URL_SYMBOL = 805, 
    GENERATE_SYMBOL = 806, PARSE_TREE_SYMBOL = 807, LOG_SYMBOL = 808, GTIDS_SYMBOL = 809, 
    PARALLEL_SYMBOL = 810, S3_SYMBOL = 811, QUALIFY_SYMBOL = 812, AUTO_SYMBOL = 813, 
    MANUAL_SYMBOL = 814, BENROULLI_SYMBOL = 815, TABLESAMPLE_SYMBOL = 816, 
    WHITESPACE = 817, INVALID_INPUT = 818, UNDERSCORE_CHARSET = 819, IDENTIFIER = 820, 
    NCHAR_TEXT = 821, BACK_TICK_QUOTED_ID = 822, DOUBLE_QUOTED_TEXT = 823, 
    SINGLE_QUOTED_TEXT = 824, DOLLAR_QUOTED_STRING_TEXT = 825, VERSION_COMMENT_START = 826, 
    MYSQL_COMMENT_START = 827, VERSION_COMMENT_END = 828, BLOCK_COMMENT = 829, 
    INVALID_BLOCK_COMMENT = 830, POUND_COMMENT = 831, DASHDASH_COMMENT = 832, 
    NOT_EQUAL2_OPERATOR = 833
  };

  explicit MySQLLexer(antlr4::CharStream *input);

  ~MySQLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void LOGICAL_OR_OPERATORAction(antlr4::RuleContext *context, size_t actionIndex);
  void INT_NUMBERAction(antlr4::RuleContext *context, size_t actionIndex);
  void DOT_IDENTIFIERAction(antlr4::RuleContext *context, size_t actionIndex);
  void ADDDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_AND_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_OR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_XOR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CAST_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void COUNT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURRENT_DATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURRENT_TIME_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURTIME_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATE_ADD_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATE_SUB_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void EXTRACT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void GROUP_CONCAT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MAX_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MID_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MIN_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void NOT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void NOW_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void POSITION_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SESSION_USER_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_SAMP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_POP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STD_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBSTR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBSTRING_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUM_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SYSDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SYSTEM_USER_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void TRIM_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VARIANCE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VAR_POP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VAR_SAMP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void UNDERSCORE_CHARSETAction(antlr4::RuleContext *context, size_t actionIndex);
  void MYSQL_COMMENT_STARTAction(antlr4::RuleContext *context, size_t actionIndex);
  void VERSION_COMMENT_ENDAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool MASTER_AUTO_POSITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_BIND_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_CONNECT_RETRY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_DELAY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_HOST_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_LOG_FILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_LOG_POS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_PASSWORD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_PORT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_RETRY_COUNT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CAPATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CA_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CERT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CIPHER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CRL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CRLPATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_KEY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_VERIFY_SERVER_CERT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_TLS_VERSION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_USER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_HEARTBEAT_PERIOD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool UDF_RETURNS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REMOTE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GET_MASTER_PUBLIC_KEY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESTART_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEFINITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DESCRIPTION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ORGANIZATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REFERENCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OPTIONAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_ENGINE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_LOAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_UNLOAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ACTIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INACTIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LATERAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RETAIN_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OLD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NETWORK_NAMESPACE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENFORCED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ARRAY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OJ_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MEMBER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RANDOM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_COMPRESSION_ALGORITHM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PRIVILEGE_CHECKS_USER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_TLS_CIPHERSUITES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REQUIRE_ROW_FORMAT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PASSWORD_LOCK_TIME_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FAILED_LOGIN_ATTEMPTS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STREAM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OFF_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RETURNING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TLS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ATTRIBUTE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENGINE_ATTRIBUTE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_ENGINE_ATTRIBUTE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_CONNECTION_AUTO_FAILOVER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ZONE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GRAMMAR_SELECTOR_DERIVED_EXPRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICA_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICAS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GET_SOURCE_PUBLIC_KEY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_AUTO_POSITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_BIND_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_COMPRESSION_ALGORITHM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_CONNECT_RETRY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_DELAY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_HEARTBEAT_PERIOD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_HOST_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_LOG_FILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_LOG_POS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_PASSWORD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_PORT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_PUBLIC_KEY_PATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_RETRY_COUNT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_CA_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_CAPATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_CERT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_CIPHER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_CRL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_CRLPATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_KEY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_SSL_VERIFY_SERVER_CERT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_TLS_CIPHERSUITES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_TLS_VERSION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_USER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SOURCE_ZSTD_COMPRESSION_LEVEL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ST_COLLECT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool KEYRING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool AUTHENTICATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FACTOR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FINISH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INITIATE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REGISTRATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool UNREGISTER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INITIAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CHALLENGE_RESPONSE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GTID_ONLY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INTERSECT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BULK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool URL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GENERATE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PARSE_TREE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LOG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GTIDS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PARALLEL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool S3_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool QUALIFY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool AUTO_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MANUAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BENROULLI_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TABLESAMPLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BACK_TICK_QUOTED_IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DOUBLE_QUOTED_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SINGLE_QUOTED_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERSION_COMMENT_STARTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERSION_COMMENT_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

}  // namespace parsers
