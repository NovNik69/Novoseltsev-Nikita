#include "exercise_2.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_exercise_5f2_2eproto::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FullName_exercise_5f2_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_exercise_5f2_2eproto::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Student_exercise_5f2_2eproto;
namespace exercise_2 {
    class FullNameDefaultTypeInternal {
    public:
        ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<FullName> _instance;
    } _FullName_default_instance_;
    class StudentDefaultTypeInternal {
    public:
        ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Student> _instance;
    } _Student_default_instance_;
    class StudentsGroupDefaultTypeInternal {
    public:
        ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<StudentsGroup> _instance;
    } _StudentsGroup_default_instance_;
}  // namespace exercise_2
static void InitDefaultsscc_info_FullName_exercise_5f2_2eproto() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    {
        void* ptr = &::exercise_2::_FullName_default_instance_;
        new (ptr) ::exercise_2::FullName();
        ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
    }
    ::exercise_2::FullName::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FullName_exercise_5f2_2eproto =
{ {ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_FullName_exercise_5f2_2eproto}, {} };

static void InitDefaultsscc_info_Student_exercise_5f2_2eproto() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    {
        void* ptr = &::exercise_2::_Student_default_instance_;
        new (ptr) ::exercise_2::Student();
        ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
    }
    ::exercise_2::Student::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Student_exercise_5f2_2eproto =
    { {ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Student_exercise_5f2_2eproto}, {
      &scc_info_FullName_exercise_5f2_2eproto.base,} };

    static void InitDefaultsscc_info_StudentsGroup_exercise_5f2_2eproto() {
        GOOGLE_PROTOBUF_VERIFY_VERSION;

        {
            void* ptr = &::exercise_2::_StudentsGroup_default_instance_;
            new (ptr) ::exercise_2::StudentsGroup();
            ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
        }
        ::exercise_2::StudentsGroup::InitAsDefaultInstance();
    }

    ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_StudentsGroup_exercise_5f2_2eproto =
    { {ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_StudentsGroup_exercise_5f2_2eproto}, {
      &scc_info_Student_exercise_5f2_2eproto.base,} };

    static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_exercise_5f2_2eproto[3];
    static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_exercise_5f2_2eproto = nullptr;
    static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_exercise_5f2_2eproto = nullptr;

    const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_exercise_5f2_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
      PROTOBUF_FIELD_OFFSET(::exercise_2::FullName, _has_bits_),
      PROTOBUF_FIELD_OFFSET(::exercise_2::FullName, _internal_metadata_),
      ~0u,  // no _extensions_
      ~0u,  // no _oneof_case_
      ~0u,  // no _weak_field_map_
      PROTOBUF_FIELD_OFFSET(::exercise_2::FullName, name_),
      PROTOBUF_FIELD_OFFSET(::exercise_2::FullName, surname_),
      PROTOBUF_FIELD_OFFSET(::exercise_2::FullName, patronymic_),
      ~0u,
      ~0u,
      0,
      ~0u,  // no _has_bits_
      PROTOBUF_FIELD_OFFSET(::exercise_2::Student, _internal_metadata_),
      ~0u,  // no _extensions_
      ~0u,  // no _oneof_case_
      ~0u,  // no _weak_field_map_
      PROTOBUF_FIELD_OFFSET(::exercise_2::Student, name_),
      PROTOBUF_FIELD_OFFSET(::exercise_2::Student, grades_),
      PROTOBUF_FIELD_OFFSET(::exercise_2::Student, avg_score_),
      ~0u,  // no _has_bits_
      PROTOBUF_FIELD_OFFSET(::exercise_2::StudentsGroup, _internal_metadata_),
      ~0u,  // no _extensions_
      ~0u,  // no _oneof_case_
      ~0u,  // no _weak_field_map_
      PROTOBUF_FIELD_OFFSET(::exercise_2::StudentsGroup, students_),
    };
    static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
      { 0, 8, sizeof(::exercise_2::FullName)},
      { 11, -1, sizeof(::exercise_2::Student)},
      { 19, -1, sizeof(::exercise_2::StudentsGroup)},
    };

    static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] = {
      reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::exercise_2::_FullName_default_instance_),
      reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::exercise_2::_Student_default_instance_),
      reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::exercise_2::_StudentsGroup_default_instance_),
    };

    const char descriptor_table_protodef_exercise_5f2_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
        "\n\020exercise_2.proto\022\nexercise_2\"Q\n\010FullNa"
        "me\022\014\n\004name\030\001 \001(\t\022\017\n\007surname\030\002 \001(\t\022\027\n\npat"
        "ronymic\030\003 \001(\tH\000\210\001\001B\r\n\013_patronymic\"P\n\007Stu"
        "dent\022\"\n\004name\030\001 \001(\0132\024.exercise_2.FullName"
        "\022\016\n\006grades\030\002 \003(\r\022\021\n\tavg_score\030\003 \001(\r\"6\n\rS"
        "tudentsGroup\022%\n\010students\030\001 \003(\0132\023.exercis"
        "e_2.Studentb\006proto3"
        ;
    static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const descriptor_table_exercise_5f2_2eproto_deps[1] = {
    };
    static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const descriptor_table_exercise_5f2_2eproto_sccs[3] = {
      &scc_info_FullName_exercise_5f2_2eproto.base,
      &scc_info_Student_exercise_5f2_2eproto.base,
      &scc_info_StudentsGroup_exercise_5f2_2eproto.base,
    };
    static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_exercise_5f2_2eproto_once;
    const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_exercise_5f2_2eproto = {
      false, false, descriptor_table_protodef_exercise_5f2_2eproto, "exercise_2.proto", 259,
      &descriptor_table_exercise_5f2_2eproto_once, descriptor_table_exercise_5f2_2eproto_sccs, descriptor_table_exercise_5f2_2eproto_deps, 3, 0,
      schemas, file_default_instances, TableStruct_exercise_5f2_2eproto::offsets,
      file_level_metadata_exercise_5f2_2eproto, 3, file_level_enum_descriptors_exercise_5f2_2eproto, file_level_service_descriptors_exercise_5f2_2eproto,
    };

    // Force running AddDescriptors() at dynamic initialization time.
    static bool dynamic_init_dummy_exercise_5f2_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_exercise_5f2_2eproto)), true);
    namespace exercise_2 {

        // ===================================================================

        void FullName::InitAsDefaultInstance() {
        }
        class FullName::_Internal {
        public:
            using HasBits = decltype(std::declval<FullName>()._has_bits_);
            static void set_has_patronymic(HasBits* has_bits) {
                (*has_bits)[0] |= 1u;
            }
        };

        FullName::FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena)
            : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
            SharedCtor();
            RegisterArenaDtor(arena);
            // @@protoc_insertion_point(arena_constructor:exercise_2.FullName)
        }
        FullName::FullName(const FullName& from)
            : ::PROTOBUF_NAMESPACE_ID::Message(),
            _has_bits_(from._has_bits_) {
            _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
            name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            if (!from._internal_name().empty()) {
                name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_name(),
                    GetArena());
            }
            surname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            if (!from._internal_surname().empty()) {
                surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_surname(),
                    GetArena());
            }
            patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            if (from._internal_has_patronymic()) {
                patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_patronymic(),
                    GetArena());
            }
            // @@protoc_insertion_point(copy_constructor:exercise_2.FullName)
        }

        void FullName::SharedCtor() {
            ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_FullName_exercise_5f2_2eproto.base);
            name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            surname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
        }

        FullName::~FullName() {
            // @@protoc_insertion_point(destructor:exercise_2.FullName)
            SharedDtor();
            _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
        }

        void FullName::SharedDtor() {
            GOOGLE_DCHECK(GetArena() == nullptr);
            name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            surname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
            patronymic_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
        }

        void FullName::ArenaDtor(void* object) {
            FullName* _this = reinterpret_cast<FullName*>(object);
            (void)_this;
        }
        void FullName::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
        }
        void FullName::SetCachedSize(int size) const {
            _cached_size_.Set(size);
        }
        const FullName& FullName::default_instance() {
            ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_FullName_exercise_5f2_2eproto.base);
            return *internal_default_instance();
        }


        void FullName::Clear() {
            // @@protoc_insertion_point(message_clear_start:exercise_2.FullName)
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            // Prevent compiler warnings about cached_has_bits being unused
            (void)cached_has_bits;

            name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
            surname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
            cached_has_bits = _has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
                patronymic_.ClearNonDefaultToEmpty();
            }
            _has_bits_.Clear();
            _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
        }

        const char* FullName::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
            _Internal::HasBits has_bits{};
            ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
            while (!ctx->Done(&ptr)) {
                ::PROTOBUF_NAMESPACE_ID::uint32 tag;
                ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
                CHK_(ptr);
                switch (tag >> 3) {
                    // string name = 1;
                case 1:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
                        auto str = _internal_mutable_name();
                        ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
                        CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "exercise_2.FullName.name"));
                        CHK_(ptr);
                    }
                    else goto handle_unusual;
                    continue;
                    // string surname = 2;
                case 2:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
                        auto str = _internal_mutable_surname();
                        ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
                        CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "exercise_2.FullName.surname"));
                        CHK_(ptr);
                    }
                    else goto handle_unusual;
                    continue;
                    // string patronymic = 3;
                case 3:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
                        auto str = _internal_mutable_patronymic();
                        ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
                        CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "exercise_2.FullName.patronymic"));
                        CHK_(ptr);
                    }
                    else goto handle_unusual;
                    continue;
                default: {
                handle_unusual:
                    if ((tag & 7) == 4 || tag == 0) {
                        ctx->SetLastTag(tag);
                        goto success;
                    }
                    ptr = UnknownFieldParse(tag,
                        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                        ptr, ctx);
                    CHK_(ptr != nullptr);
                    continue;
                }
                }  // switch
            }  // while
        success:
            _has_bits_.Or(has_bits);
            return ptr;
        failure:
            ptr = nullptr;
            goto success;
#undef CHK_
        }

        ::PROTOBUF_NAMESPACE_ID::uint8* FullName::_InternalSerialize(
            ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
            // @@protoc_insertion_point(serialize_to_array_start:exercise_2.FullName)
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            (void)cached_has_bits;

            // string name = 1;
            if (this->name().size() > 0) {
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
                    this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
                    "exercise_2.FullName.name");
                target = stream->WriteStringMaybeAliased(
                    1, this->_internal_name(), target);
            }

            // string surname = 2;
            if (this->surname().size() > 0) {
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
                    this->_internal_surname().data(), static_cast<int>(this->_internal_surname().length()),
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
                    "exercise_2.FullName.surname");
                target = stream->WriteStringMaybeAliased(
                    2, this->_internal_surname(), target);
            }

            // string patronymic = 3;
            if (_internal_has_patronymic()) {
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
                    this->_internal_patronymic().data(), static_cast<int>(this->_internal_patronymic().length()),
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
                    "exercise_2.FullName.patronymic");
                target = stream->WriteStringMaybeAliased(
                    3, this->_internal_patronymic(), target);
            }

            if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
                target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                    _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
            }
            // @@protoc_insertion_point(serialize_to_array_end:exercise_2.FullName)
            return target;
        }

        size_t FullName::ByteSizeLong() const {
            // @@protoc_insertion_point(message_byte_size_start:exercise_2.FullName)
            size_t total_size = 0;

            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            // Prevent compiler warnings about cached_has_bits being unused
            (void)cached_has_bits;

            // string name = 1;
            if (this->name().size() > 0) {
                total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                        this->_internal_name());
            }

            // string surname = 2;
            if (this->surname().size() > 0) {
                total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                        this->_internal_surname());
            }

            // string patronymic = 3;
            cached_has_bits = _has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
                total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                        this->_internal_patronymic());
            }

            if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
                return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
                    _internal_metadata_, total_size, &_cached_size_);
            }
            int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
            SetCachedSize(cached_size);
            return total_size;
        }

        void FullName::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
            // @@protoc_insertion_point(generalized_merge_from_start:exercise_2.FullName)
            GOOGLE_DCHECK_NE(&from, this);
            const FullName* source =
                ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FullName>(
                    &from);
            if (source == nullptr) {
                // @@protoc_insertion_point(generalized_merge_from_cast_fail:exercise_2.FullName)
                ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
            }
            else {
                // @@protoc_insertion_point(generalized_merge_from_cast_success:exercise_2.FullName)
                MergeFrom(*source);
            }
        }

        void FullName::MergeFrom(const FullName& from) {
            // @@protoc_insertion_point(class_specific_merge_from_start:exercise_2.FullName)
            GOOGLE_DCHECK_NE(&from, this);
            _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            (void)cached_has_bits;

            if (from.name().size() > 0) {
                _internal_set_name(from._internal_name());
            }
            if (from.surname().size() > 0) {
                _internal_set_surname(from._internal_surname());
            }
            if (from._internal_has_patronymic()) {
                _internal_set_patronymic(from._internal_patronymic());
            }
        }

        void FullName::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
            // @@protoc_insertion_point(generalized_copy_from_start:exercise_2.FullName)
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        void FullName::CopyFrom(const FullName& from) {
            // @@protoc_insertion_point(class_specific_copy_from_start:exercise_2.FullName)
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        bool FullName::IsInitialized() const {
            return true;
        }

        void FullName::InternalSwap(FullName* other) {
            using std::swap;
            _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
            swap(_has_bits_[0], other->_has_bits_[0]);
            name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
            surname_.Swap(&other->surname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
            patronymic_.Swap(&other->patronymic_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
        }

        ::PROTOBUF_NAMESPACE_ID::Metadata FullName::GetMetadata() const {
            return GetMetadataStatic();
        }


        // ===================================================================

        void Student::InitAsDefaultInstance() {
            ::exercise_2::_Student_default_instance_._instance.get_mutable()->name_ = const_cast<::exercise_2::FullName*>(
                ::exercise_2::FullName::internal_default_instance());
        }
        class Student::_Internal {
        public:
            static const ::exercise_2::FullName& name(const Student* msg);
        };

        const ::exercise_2::FullName&
            Student::_Internal::name(const Student* msg) {
            return *msg->name_;
        }
        Student::Student(::PROTOBUF_NAMESPACE_ID::Arena* arena)
            : ::PROTOBUF_NAMESPACE_ID::Message(arena),
            grades_(arena) {
            SharedCtor();
            RegisterArenaDtor(arena);
            // @@protoc_insertion_point(arena_constructor:exercise_2.Student)
        }
        Student::Student(const Student& from)
            : ::PROTOBUF_NAMESPACE_ID::Message(),
            grades_(from.grades_) {
            _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
            if (from._internal_has_name()) {
                name_ = new ::exercise_2::FullName(*from.name_);
            }
            else {
                name_ = nullptr;
            }
            avg_score_ = from.avg_score_;
            // @@protoc_insertion_point(copy_constructor:exercise_2.Student)
        }

        void Student::SharedCtor() {
            ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Student_exercise_5f2_2eproto.base);
            ::memset(&name_, 0, static_cast<size_t>(
                reinterpret_cast<char*>(&avg_score_) -
                reinterpret_cast<char*>(&name_)) + sizeof(avg_score_));
        }

        Student::~Student() {
            // @@protoc_insertion_point(destructor:exercise_2.Student)
            SharedDtor();
            _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
        }

        void Student::SharedDtor() {
            GOOGLE_DCHECK(GetArena() == nullptr);
            if (this != internal_default_instance()) delete name_;
        }

        void Student::ArenaDtor(void* object) {
            Student* _this = reinterpret_cast<Student*>(object);
            (void)_this;
        }
        void Student::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
        }
        void Student::SetCachedSize(int size) const {
            _cached_size_.Set(size);
        }
        const Student& Student::default_instance() {
            ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Student_exercise_5f2_2eproto.base);
            return *internal_default_instance();
        }


        void Student::Clear() {
            // @@protoc_insertion_point(message_clear_start:exercise_2.Student)
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            // Prevent compiler warnings about cached_has_bits being unused
            (void)cached_has_bits;

            grades_.Clear();
            if (GetArena() == nullptr && name_ != nullptr) {
                delete name_;
            }
            name_ = nullptr;
            avg_score_ = 0u;
            _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
        }

        const char* Student::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
            ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
            while (!ctx->Done(&ptr)) {
                ::PROTOBUF_NAMESPACE_ID::uint32 tag;
                ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
                CHK_(ptr);
                switch (tag >> 3) {
                    // .exercise_2.FullName name = 1;
                case 1:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
                        ptr = ctx->ParseMessage(_internal_mutable_name(), ptr);
                        CHK_(ptr);
                    }
                    else goto handle_unusual;
                    continue;
                    // repeated uint32 grades = 2;
                case 2:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
                        ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_grades(), ptr, ctx);
                        CHK_(ptr);
                    }
                    else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16) {
                        _internal_add_grades(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
                        CHK_(ptr);
                    }
                    else goto handle_unusual;
                    continue;
                    // uint32 avg_score = 3;
                case 3:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
                        avg_score_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
                        CHK_(ptr);
                    }
                    else goto handle_unusual;
                    continue;
                default: {
                handle_unusual:
                    if ((tag & 7) == 4 || tag == 0) {
                        ctx->SetLastTag(tag);
                        goto success;
                    }
                    ptr = UnknownFieldParse(tag,
                        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                        ptr, ctx);
                    CHK_(ptr != nullptr);
                    continue;
                }
                }  // switch
            }  // while
        success:
            return ptr;
        failure:
            ptr = nullptr;
            goto success;
#undef CHK_
        }

        ::PROTOBUF_NAMESPACE_ID::uint8* Student::_InternalSerialize(
            ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
            // @@protoc_insertion_point(serialize_to_array_start:exercise_2.Student)
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            (void)cached_has_bits;

            // .exercise_2.FullName name = 1;
            if (this->has_name()) {
                target = stream->EnsureSpace(target);
                target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
                    InternalWriteMessage(
                        1, _Internal::name(this), target, stream);
            }

            // repeated uint32 grades = 2;
            {
                int byte_size = _grades_cached_byte_size_.load(std::memory_order_relaxed);
                if (byte_size > 0) {
                    target = stream->WriteUInt32Packed(
                        2, _internal_grades(), byte_size, target);
                }
            }

            // uint32 avg_score = 3;
            if (this->avg_score() != 0) {
                target = stream->EnsureSpace(target);
                target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_avg_score(), target);
            }

            if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
                target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                    _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
            }
            // @@protoc_insertion_point(serialize_to_array_end:exercise_2.Student)
            return target;
        }

        size_t Student::ByteSizeLong() const {
            // @@protoc_insertion_point(message_byte_size_start:exercise_2.Student)
            size_t total_size = 0;

            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            // Prevent compiler warnings about cached_has_bits being unused
            (void)cached_has_bits;

            // repeated uint32 grades = 2;
            {
                size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
                    UInt32Size(this->grades_);
                if (data_size > 0) {
                    total_size += 1 +
                        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
                            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
                }
                int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
                _grades_cached_byte_size_.store(cached_size,
                    std::memory_order_relaxed);
                total_size += data_size;
            }

            // .exercise_2.FullName name = 1;
            if (this->has_name()) {
                total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
                        *name_);
            }

            // uint32 avg_score = 3;
            if (this->avg_score() != 0) {
                total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
                        this->_internal_avg_score());
            }

            if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
                return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
                    _internal_metadata_, total_size, &_cached_size_);
            }
            int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
            SetCachedSize(cached_size);
            return total_size;
        }

        void Student::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
            // @@protoc_insertion_point(generalized_merge_from_start:exercise_2.Student)
            GOOGLE_DCHECK_NE(&from, this);
            const Student* source =
                ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Student>(
                    &from);
            if (source == nullptr) {
                // @@protoc_insertion_point(generalized_merge_from_cast_fail:exercise_2.Student)
                ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
            }
            else {
                // @@protoc_insertion_point(generalized_merge_from_cast_success:exercise_2.Student)
                MergeFrom(*source);
            }
        }

        void Student::MergeFrom(const Student& from) {
            // @@protoc_insertion_point(class_specific_merge_from_start:exercise_2.Student)
            GOOGLE_DCHECK_NE(&from, this);
            _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            (void)cached_has_bits;

            grades_.MergeFrom(from.grades_);
            if (from.has_name()) {
                _internal_mutable_name()->::exercise_2::FullName::MergeFrom(from._internal_name());
            }
            if (from.avg_score() != 0) {
                _internal_set_avg_score(from._internal_avg_score());
            }
        }

        void Student::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
            // @@protoc_insertion_point(generalized_copy_from_start:exercise_2.Student)
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        void Student::CopyFrom(const Student& from) {
            // @@protoc_insertion_point(class_specific_copy_from_start:exercise_2.Student)
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        bool Student::IsInitialized() const {
            return true;
        }

        void Student::InternalSwap(Student* other) {
            using std::swap;
            _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
            grades_.InternalSwap(&other->grades_);
            ::PROTOBUF_NAMESPACE_ID::internal::memswap<
                PROTOBUF_FIELD_OFFSET(Student, avg_score_)
                + sizeof(Student::avg_score_)
                - PROTOBUF_FIELD_OFFSET(Student, name_)>(
                    reinterpret_cast<char*>(&name_),
                    reinterpret_cast<char*>(&other->name_));
        }

        ::PROTOBUF_NAMESPACE_ID::Metadata Student::GetMetadata() const {
            return GetMetadataStatic();
        }


        // ===================================================================

        void StudentsGroup::InitAsDefaultInstance() {
        }
        class StudentsGroup::_Internal {
        public:
        };

        StudentsGroup::StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena)
            : ::PROTOBUF_NAMESPACE_ID::Message(arena),
            students_(arena) {
            SharedCtor();
            RegisterArenaDtor(arena);
            // @@protoc_insertion_point(arena_constructor:exercise_2.StudentsGroup)
        }
        StudentsGroup::StudentsGroup(const StudentsGroup& from)
            : ::PROTOBUF_NAMESPACE_ID::Message(),
            students_(from.students_) {
            _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
            // @@protoc_insertion_point(copy_constructor:exercise_2.StudentsGroup)
        }

        void StudentsGroup::SharedCtor() {
            ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_StudentsGroup_exercise_5f2_2eproto.base);
        }

        StudentsGroup::~StudentsGroup() {
            // @@protoc_insertion_point(destructor:exercise_2.StudentsGroup)
            SharedDtor();
            _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
        }

        void StudentsGroup::SharedDtor() {
            GOOGLE_DCHECK(GetArena() == nullptr);
        }

        void StudentsGroup::ArenaDtor(void* object) {
            StudentsGroup* _this = reinterpret_cast<StudentsGroup*>(object);
            (void)_this;
        }
        void StudentsGroup::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
        }
        void StudentsGroup::SetCachedSize(int size) const {
            _cached_size_.Set(size);
        }
        const StudentsGroup& StudentsGroup::default_instance() {
            ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_StudentsGroup_exercise_5f2_2eproto.base);
            return *internal_default_instance();
        }


        void StudentsGroup::Clear() {
            // @@protoc_insertion_point(message_clear_start:exercise_2.StudentsGroup)
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            // Prevent compiler warnings about cached_has_bits being unused
            (void)cached_has_bits;

            students_.Clear();
            _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
        }

        const char* StudentsGroup::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
            ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
            while (!ctx->Done(&ptr)) {
                ::PROTOBUF_NAMESPACE_ID::uint32 tag;
                ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
                CHK_(ptr);
                switch (tag >> 3) {
                    // repeated .exercise_2.Student students = 1;
                case 1:
                    if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
                        ptr -= 1;
                        do {
                            ptr += 1;
                            ptr = ctx->ParseMessage(_internal_add_students(), ptr);
                            CHK_(ptr);
                            if (!ctx->DataAvailable(ptr)) break;
                        } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
                    }
                    else goto handle_unusual;
                    continue;
                default: {
                handle_unusual:
                    if ((tag & 7) == 4 || tag == 0) {
                        ctx->SetLastTag(tag);
                        goto success;
                    }
                    ptr = UnknownFieldParse(tag,
                        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                        ptr, ctx);
                    CHK_(ptr != nullptr);
                    continue;
                }
                }  // switch
            }  // while
        success:
            return ptr;
        failure:
            ptr = nullptr;
            goto success;
#undef CHK_
        }

        ::PROTOBUF_NAMESPACE_ID::uint8* StudentsGroup::_InternalSerialize(
            ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
            // @@protoc_insertion_point(serialize_to_array_start:exercise_2.StudentsGroup)
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            (void)cached_has_bits;

            // repeated .exercise_2.Student students = 1;
            for (unsigned int i = 0,
                n = static_cast<unsigned int>(this->_internal_students_size()); i < n; i++) {
                target = stream->EnsureSpace(target);
                target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
                    InternalWriteMessage(1, this->_internal_students(i), target, stream);
            }

            if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
                target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                    _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
            }
            // @@protoc_insertion_point(serialize_to_array_end:exercise_2.StudentsGroup)
            return target;
        }

        size_t StudentsGroup::ByteSizeLong() const {
            // @@protoc_insertion_point(message_byte_size_start:exercise_2.StudentsGroup)
            size_t total_size = 0;

            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            // Prevent compiler warnings about cached_has_bits being unused
            (void)cached_has_bits;

            // repeated .exercise_2.Student students = 1;
            total_size += 1UL * this->_internal_students_size();
            for (const auto& msg : this->students_) {
                total_size +=
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
            }

            if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
                return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
                    _internal_metadata_, total_size, &_cached_size_);
            }
            int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
            SetCachedSize(cached_size);
            return total_size;
        }

        void StudentsGroup::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
            // @@protoc_insertion_point(generalized_merge_from_start:exercise_2.StudentsGroup)
            GOOGLE_DCHECK_NE(&from, this);
            const StudentsGroup* source =
                ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StudentsGroup>(
                    &from);
            if (source == nullptr) {
                // @@protoc_insertion_point(generalized_merge_from_cast_fail:exercise_2.StudentsGroup)
                ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
            }
            else {
                // @@protoc_insertion_point(generalized_merge_from_cast_success:exercise_2.StudentsGroup)
                MergeFrom(*source);
            }
        }

        void StudentsGroup::MergeFrom(const StudentsGroup& from) {
            // @@protoc_insertion_point(class_specific_merge_from_start:exercise_2.StudentsGroup)
            GOOGLE_DCHECK_NE(&from, this);
            _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
            ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
            (void)cached_has_bits;

            students_.MergeFrom(from.students_);
        }

        void StudentsGroup::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
            // @@protoc_insertion_point(generalized_copy_from_start:exercise_2.StudentsGroup)
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        void StudentsGroup::CopyFrom(const StudentsGroup& from) {
            // @@protoc_insertion_point(class_specific_copy_from_start:exercise_2.StudentsGroup)
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        bool StudentsGroup::IsInitialized() const {
            return true;
        }

        void StudentsGroup::InternalSwap(StudentsGroup* other) {
            using std::swap;
            _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
            students_.InternalSwap(&other->students_);
        }

        ::PROTOBUF_NAMESPACE_ID::Metadata StudentsGroup::GetMetadata() const {
            return GetMetadataStatic();
        }


        // @@protoc_insertion_point(namespace_scope)
    }  // namespace exercise_2
    PROTOBUF_NAMESPACE_OPEN
        template<> PROTOBUF_NOINLINE::exercise_2::FullName* Arena::CreateMaybeMessage< ::exercise_2::FullName >(Arena* arena) {
        return Arena::CreateMessageInternal< ::exercise_2::FullName >(arena);
    }
    template<> PROTOBUF_NOINLINE::exercise_2::Student* Arena::CreateMaybeMessage< ::exercise_2::Student >(Arena* arena) {
        return Arena::CreateMessageInternal< ::exercise_2::Student >(arena);
    }
    template<> PROTOBUF_NOINLINE::exercise_2::StudentsGroup* Arena::CreateMaybeMessage< ::exercise_2::StudentsGroup >(Arena* arena) {
        return Arena::CreateMessageInternal< ::exercise_2::StudentsGroup >(arena);
    }
    PROTOBUF_NAMESPACE_CLOSE
