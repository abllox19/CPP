#include "Serializer.hpp"

Serializer::Serializer(/* args */) {}

Serializer::~Serializer() {}

__intptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<__intptr_t>(ptr);
}

Data	*Serializer::deserialize(__intptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}