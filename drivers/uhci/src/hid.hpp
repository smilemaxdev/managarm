
struct HidDescriptor : public DescriptorBase {
	struct [[ gnu::packed ]] Entry {
		uint8_t descriptorType;
		uint16_t descriptorLength;
	};

	uint16_t hidClass;
	uint8_t countryCode;
	uint8_t numDescriptors;
	Entry entries[];
};
